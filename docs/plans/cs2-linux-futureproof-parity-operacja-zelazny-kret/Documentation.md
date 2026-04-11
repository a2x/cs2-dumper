# Dokumentacja — Pełna future-proof reanimacja linuxowego dumpra i readera CS2
## Kryptonim
- Operacja Żelazny Kret

## Obecny stan
- Bieżący etap: `DONE`
- Status bundle: `zamknięty`
- Repo docelowe: `/home/sieciowiec/dev/rust/cs2-memory-reader`
- Repo referencyjne read-only:
  - `/home/sieciowiec/dev/rust/master-farmer-case`
  - windows branch tego repo jako referencja semantyczna

## Finalny verdict
- Linuxowy branch został przywrócony do działającego stanu dla aktualnej wersji gry.
- Pełny dumper kończy się kodem `0`, generuje użyteczne artefakty i nie spamuje już błędami dla rootów, które zostały świadomie zastąpione runtime replacementami.
- Reader zwraca live snapshot semantycznie zgodny z kontraktem `master-farmer-case/game_data` tam, gdzie live Linux daje te dane.
- Update surface został ograniczony do małego zestawu rootów i jawnego workflow odzyskiwania po patchu gry.

## Co działa
- Attach do właściwego procesu `cs2`.
- Live tooling:
  - `modules`
  - `interfaces`
  - `singleton`
  - `probe`
  - `addr`
  - `scan`
  - `schema-scopes`
  - `verify-root`
  - `signature-snippet`
  - `entities`
  - `entity-chunk`
  - `handle`
  - `handle-scan`
  - `camera`
  - `snapshot`
- Stabilne rooty/punkty wejścia:
  - `dwGameEntitySystem`
  - `dwViewRender`
  - `dwPrediction`
  - `dwNetworkGameClient`
  - `dwInputSystem`
  - `SchemaSystem`
- Runtime replacementy:
  - `dwGlobalVars` -> `Source2EngineToClient001 + 0x148`
  - `dwGameRules` -> `dwGameEntitySystem -> cs_gamerules -> C_CSGameRulesProxy::m_pGameRules`
  - `dwBuildNumber` -> `optional_metadata = null`
  - `game_version` -> `game/csgo/steam.inf` + `appmanifest_730.acf`
- Reader parity:
  - local player
  - other players
  - `view_matrix` jako syntetyczny fallback z `ViewRender`
  - `view_angles`
  - `map_name`
  - `game_phase`
  - `head_pos`
  - `bones`
  - częściowo `bbox_2d`
  - częściowo `head_pos_2d`
  - `is_targeted`

## Ostatnia walidacja
- Data: `2026-04-11`
- Wynik:
  - `cargo build` przechodzi
  - `cargo test -- --nocapture` przechodzi
  - `./target/debug/cs2-dumper -vv` kończy się kodem `0`
  - `cargo run -- snapshot` przechodzi
- Kluczowe live obserwacje z ostatniego gate:
  - `map_name=de_dust2`
  - `game_phase=6`
  - `other_players=9`
  - `output/info.json` zawiera:
    - `steam_build_id=22627914`
    - `client_version=2000777`
    - `patch_version=1.41.4.1`
    - `source_revision=10575829`
  - `local_bones_smoke` zwraca sensowną pozycję głowy względem `origin`
  - snapshot zwraca bones/head positions dla innych graczy i `bbox_2d/head_pos_2d` tam, gdzie projekcja jest poprawna

## Polityka rootów po zamknięciu taska
- Preferowane źródła prawdy:
  - `interfaces/singletony`
  - `SchemaSystem`
  - `semantic chains`
- Patterny tylko dla niezbędnych wejść.
- Klasyczne windowsowe `dw...` nie są utrzymywane na siłę, jeśli linuxowy chain daje ten sam sens danych taniej i stabilniej.
- `output/offsets.*` pozostaje uczciwe:
  - nie udaje klasycznych offsetów modułu, jeśli ich już nie mamy
- `output/runtime.json` opisuje replacementy runtime i optional metadata

## Update workflow po patchu gry
1. `cargo build`
2. `./target/debug/cs2-dumper -vv`
3. `cargo test -- --nocapture`
4. `cargo run -- snapshot`
5. Jeśli drift dotyczy roota:
   - `./target/debug/cs2-dumper scan <module> "<pattern>" --rip`
   - `./target/debug/cs2-dumper verify-root --module <module> --name <name> --source generated --kind <kind>`
   - `./target/debug/cs2-dumper signature-snippet <name> "<pattern>" --rip`
6. Jeśli drift dotyczy reader parity:
   - `./target/debug/cs2-dumper entities --count 128 --contains player`
   - `cargo run -- camera`
   - `cargo run -- snapshot`
7. Jeśli klasyczny global nadal jest martwy, ale runtime ma stabilny replacement:
   - nie promuj na siłę martwego `dw...` do `output/offsets.*`
   - opisz replacement w `output/runtime.json`
   - utrzymaj smoke test na chainie albo fallbacku

## Otwarty zakres / resztkowe ryzyka
- `dwBuildNumber` nadal nie ma stabilnego linuxowego źródła i pozostaje opcjonalną metadadą.
- `game_version` jest już odzyskiwane stabilnie z natywnych plików gry/Steama, ale nie jest to to samo pole semantyczne co windowsowy pamięciowy `dwBuildNumber`.
- Część klasycznych windowsowych nazw nadal nie pojawia się jako prawdziwe offsety modułu, bo zostały zastąpione `interfaces/schema/chains`.
- Projekcja 2D może zwracać `None` dla części encji zależnie od kamery i jakości live bone buffer.
- Bone buffer dla niektórych encji nadal potrafi zwrócić pojedyncze odstające kości; reader jest na to odporny, ale nie traktuje tego jako perfekcyjnego model-state dumpa.

## Restart capsule
- Jeśli trzeba wrócić do taska po dłuższej przerwie, zacznij od:
  - [Plan.md](/home/sieciowiec/dev/rust/cs2-memory-reader/docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Plan.md)
  - `cargo build`
  - `cargo test -- --nocapture`
  - `./target/debug/cs2-dumper -vv`
  - `cargo run -- snapshot`
- Następny sensowny kierunek po `DONE`, jeśli kiedyś będzie potrzebny:
  - odzyskanie opcjonalnego `dwBuildNumber`
  - poprawa jakości `bbox_2d/head_pos_2d` dla trudnych pozycji kamery
  - ewentualne dalsze ograniczanie liczby martwych klasycznych sygnatur w `config.json`
