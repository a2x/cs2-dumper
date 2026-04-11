# Plan Wykonania

## Kontrakt Wykonania
- `Prompt.md` zamraża target i kryteria sukcesu.
- Ten plik jest living source of truth dla wykonania, restartu i decyzji.
- Po każdym milestone:
  - wykonaj walidację,
  - zapisz verdict,
  - zaktualizuj ten plik i `Documentation.md`,
  - przejdź od razu do kolejnego nieukończonego milestone'u.
- Nie pytaj użytkownika o `next steps` między milestone'ami.
- Zatrzymanie tylko przy globalnym `DONE` albo realnym `BLOCKED`.

## Strategia Testów i Walidacji
- Owner: root chain recovery
  - Source-of-truth lane:
    - `./target/debug/cs2-dumper singleton libengine2.so NetworkClientService_001`
    - `./target/debug/cs2-dumper singleton libclient.so Source2ClientPrediction001`
    - `./target/debug/cs2-dumper probe libclient.so dwGameEntitySystem --source generated --read ptr`
    - `./target/debug/cs2-dumper addr <candidate> --read ...`
  - Cheap loop:
    - `cargo build`
    - `cargo test interface_fallback_offsets -- --nocapture`
  - Harder gate:
    - live semantyczny smoke dla local player chain
- Owner: entity system validation
  - Source-of-truth lane:
    - live odczyt chunków i encji z `dwGameEntitySystem`
    - porównanie algorytmu iteracji do `master-farmer-case/game_data.rs`
  - Cheap loop:
    - celowane `probe/addr`
  - Harder gate:
    - iteracja co najmniej kilku encji z żywego procesu
- Owner: minimal reader snapshot
  - Source-of-truth lane:
    - live snapshot local player + other players
    - porównanie kontraktu do `/home/sieciowiec/dev/rust/master-farmer-case/game_data/src/game_data.rs`
  - Cheap loop:
    - `cargo build`
    - testy readera, jeśli powstaną
  - Harder gate:
    - pełny smoke snapshotu z aktualnego `cs2`
- Wymagane artefakty:
  - ostatni verdict live
  - lista odzyskanych chainów i offsetów
  - jawne odchylenia od referencji `master-farmer-case`
- Otwarte ryzyko walidacyjne:
  - chain lokalnego gracza może wymagać obejścia przez service singleton zamiast osobnego globalu
  - część pól `GameData` może pozostać etapowo zdegradowana do `None`, jeśli rooty jeszcze nie istnieją

## Domyślna Walidacja
- `cargo build`
- `cargo test interface_fallback_offsets -- --nocapture`
- celowany live smoke dla bieżącego chaina

## Etap 1 — Zamrożenie kontraktu i wejść
- Stan: `done`
- Cel: spisać dokładnie, jakie pola z `master-farmer-case` są absolutnie wymagane dla tego subtaska i które rooty już istnieją w tym repo.
- Zakres:
  - zamrozić minimalny kontrakt `GameData`
  - wskazać odzyskane rooty i luki
  - wskazać referencyjny kod i algorytmy z `game_data.rs`
- Kryteria akceptacji:
  - istnieje jawna mapa: `root -> oczekiwany chain -> wymagane pola`
  - bundle mówi, które pola są must-have w tym subtasku
- Walidacja:
  - read-only review referencji i aktualnego `output/offsets.json`
- Co dalej po sukcesie:
  - przejdź do Etapu 2
- Próg blokady:
  - brak czytelnego kontraktu referencyjnego
- Notatki decyzyjne:
  - referencją funkcjonalną jest `master-farmer-case/game_data/src/game_data.rs`
  - zamrożony minimalny kontrakt: local player controller/pawn, entity iteration, `view_matrix`, `view_angles`
  - potwierdzone rooty wejściowe: `dwGameEntitySystem`, `dwPrediction`, `dwNetworkGameClient`, `dwViewRender`, `dwInputSystem`
  - `dwPrediction + 0x148` zostało odrzucone live jako nieaktualne dla obecnego Linuksa
  - `dwGameEntitySystem` daje czytelne wejście do encji, ale layout dalszych chunk records nie jest jeszcze w pełni opisany

## Etap 2 — Chain do lokalnego gracza
- Stan: `done`
- Cel: odzyskać aktualny linuxowy chain do local player controller i local player pawn bez czekania na komplet wszystkich sygnatur.
- Zakres:
  - testować ścieżki przez `dwNetworkGameClient`
  - testować ścieżki przez `dwPrediction`
  - testować ścieżki przez `dwGameEntitySystem`
  - znaleźć local player handle, controller pointer i pawn pointer
- Kryteria akceptacji:
  - local player controller jest czytany live i ma sensowne pola
  - local player pawn jest czytany live i ma sensowne pola
- Walidacja:
  - live smoke pointer chain
  - odczyt co najmniej `score`, `m_hPlayerPawn`, `health`, `team_num`, `life_state`
- Co dalej po sukcesie:
  - przejdź do Etapu 3
- Próg blokady:
  - brak semantycznego punktu zaczepienia do lokalnego gracza mimo wszystkich trzech rootów
- Notatki decyzyjne:
  - nie kopiować 1:1 windowsowego `dwLocalPlayerPawn = dwPrediction + const` bez live potwierdzenia
  - potwierdzone live: `entity + 0x10 -> identity`, `identity + 0x20 -> designer name`
  - potwierdzone live kontrolery: slot `1` oraz `11..19` w pierwszym chunku mają nazwę `cs_player_controller`
  - potwierdzone live: `handle 0x1` rozwiązuje się do slotu `1` i kontrollera
  - aktualne `CCSPlayerController::m_hPlayerPawn = 0xA8C` rozwiązuje się do obiektu o nazwie `c_cs_player_for_precache`, ale live semantyka potwierdza, że ten obiekt pełni rolę pawn-like instancji gracza
  - `m_hObserverPawn = 0xA90` nadal rozwiązuje się do `c_cs_observer_for_precache`
  - potwierdzone live pola kontrolera:
    - `m_sSanitizedPlayerName -> 0x9E0` jako pointer do stringa
    - `m_bPawnIsAlive -> 0xA94`
    - `m_iPawnHealth -> 0xA98`
    - `m_iPawnArmor -> 0xA9C`
    - `team-like field -> 0x9C0`
    - `score-like field -> 0xAB4`
  - potwierdzone live pola pawn-like obiektu z `m_hPlayerPawn`:
    - `origin-like vec3 -> 0x1540`
    - `controller backrefs -> 0x1558`, `0x155C`, `0x1600`
    - `scene-node-like ptr -> 0x4A8`, a `scene_node + 0xD0` zgadza się z originem
  - old `NetworkClientService` field patterns (`localPlayer`, `signOnState`, `maxClients`, `clientTickCount`) są martwe; stare windowsowe relacje offsetów służą tylko jako heurystyka

## Etap 3 — Entity System i iteracja encji
- Stan: `done`
- Cel: potwierdzić realny layout entity system/listy na Linuksie i ustalić, czy iteracja może być taka sama jak w `master-farmer-case`.
- Zakres:
  - zlokalizować strukturę chunków
  - znaleźć `highestEntityIndex` albo działające obejście
  - przetestować iterację controller -> pawn
- Kryteria akceptacji:
  - co najmniej kilka encji daje się czytać live
  - jest werdykt, czy algorytm iteracji z referencji jest zgodny, czy wymaga zmiany
- Walidacja:
  - live iteracja kilku wpisów entity systemu
- Co dalej po sukcesie:
  - przejdź do Etapu 4
- Próg blokady:
  - brak stabilnej bazy encji mimo działającego `dwGameEntitySystem`
- Notatki decyzyjne:
  - jeśli `dwEntityList` okaże się tylko aliasem `dwGameEntitySystem`, preferuj jeden source of truth
  - working iteration dla aktualnego builda:
    - bierz kontrolery z chunka `0` pod rootem `dwGameEntitySystem`
    - filtruj po `designer_name == cs_player_controller`
    - gracza mapuj przez `controller + 0xA8C -> pawn-like object`
  - globalny layout nie jest windowsowo-identyczny:
    - `GameEntitySystem` ma wiele chunk records dla różnych grup encji
    - recordy `+0x110`, `+0x210`, `+0x260` prowadzą do `csgo_previewplayer`
    - recordy `+0x248`, `+0x250` prowadzą do `cs_player_manager` i `*_for_precache`
  - minimalny reader nie musi czekać na pełny globalny model wszystkich records, bo working set graczy mieści się w chunku `0`

## Etap 4 — View Matrix i View Angles
- Stan: `done`
- Cel: odzyskać rooty potrzebne do W2S i snapshotu ekranowego.
- Zakres:
  - odzyskać `dwViewMatrix`
  - odzyskać `dwViewAngles`
  - jeśli trzeba, znaleźć service/object fallback zamiast patternu
- Kryteria akceptacji:
  - `view_matrix` daje sensowny odczyt live
  - `view_angles` daje sensowny odczyt live
- Walidacja:
  - live odczyt macierzy i kątów
  - szybki sanity check na wartościach
- Co dalej po sukcesie:
  - przejdź do Etapu 5
- Próg blokady:
  - brak działającej ścieżki do W2S roots mimo dostępnych client services
- Notatki decyzyjne:
  - bez tych rootów reader ma być nadal składany, ale z jawną degradacją pól zależnych od W2S
  - `dwViewRender` jest aktualnym source of truth dla kamery lokalnego gracza
  - `camera_origin = local_pawn_origin + view_offset` zostało potwierdzone live
  - `local_pawn + 0x1448` daje żywe `view_angles`
  - `view_matrix` jest aktualnie składany syntetycznie z `ViewRender` frustum rays + `horizontal_fov` + `aspect`, zamiast martwego globalnego patternu `dwViewMatrix`

## Etap 5 — Minimalny Reader
- Stan: `done`
- Cel: zbudować pierwszy minimalny reader zgodny semantycznie z referencyjnym `GameData`.
- Zakres:
  - local player snapshot
  - entity iteration
  - minimalne mapowanie pól do kontraktu
  - live smoke / test helper
- Kryteria akceptacji:
  - reader zwraca sensowny local player snapshot
  - reader zwraca listę innych graczy z minimalnymi polami
  - jawnie zapisane są brakujące pola zaawansowane
- Walidacja:
  - live smoke na uruchomionym `cs2`
  - porównanie do kontraktu `master-farmer-case`
- Co dalej po sukcesie:
  - przejdź do Etapu 6
- Próg blokady:
  - brak jednego z krytycznych rootów uniemożliwia minimalny snapshot
- Notatki decyzyjne:
  - jeśli pełna zgodność z referencją nie jest jeszcze możliwa, minimalny reader ma zwracać częściowe dane bez paniki
  - minimalny reader został osadzony w `src/reader.rs`
  - live `snapshot` zwraca:
    - `view_matrix`
    - `local_player_state`
    - listę `other_players`
  - pola zaawansowane (`bones`, `bbox`, `is_targeted`, `map_name`, `game_phase`) są jawnie degradowane do `None` / `false`

## Etap 6 — Domknięcie, testy, przekazanie
- Stan: `done`
- Cel: ustabilizować subtask, zapisać wyniki i zostawić restartowalny stan.
- Zakres:
  - dopisać potrzebne testy/smoke
  - zaktualizować dokumentację
  - zapisać ryzyka i dalsze kroki
- Kryteria akceptacji:
  - ostatnia walidacja jest zapisana
  - wiadomo, co zostało odzyskane i czego nadal brakuje
- Walidacja:
  - `cargo build`
  - `cargo test interface_fallback_offsets -- --nocapture`
  - live smoke readera
- Co dalej po sukcesie:
  - oznacz subtask jako `DONE`
- Próg blokady:
  - brak możliwości wykonania live smoke na uruchomionym `cs2`
- Notatki decyzyjne:
  - subtask może zakończyć się jako `DONE` nawet przy otwartych polach zaawansowanych, jeśli minimalny reader działa i ryzyka są jawnie opisane
  - hard gate przeszedł dla:
    - `cargo build`
    - `cargo test interface_fallback_offsets -- --nocapture`
    - `cargo test view_render_camera_smoke -- --nocapture`
    - `cargo test game_data_snapshot_smoke -- --nocapture`
    - `./target/debug/cs2-dumper -vv`
    - `cargo run -- snapshot`

## Postęp
- 2026-04-11: subtask utworzony jako focused execution bundle dla local player chain, entity system i minimalnego readera.
- 2026-04-11: Etap 1 zamrożony jako `done`; Etap 2 ruszył na live tooling `entities`, `handle`, `handle-scan`.
- 2026-04-11: Etap 2 domknięty live; controller -> pawn chain działa semantycznie na aktualnym buildzie.
- 2026-04-11: Etap 3 domknięty live; iteracja graczy działa przez chunk `0` kontrolerów i `m_hPlayerPawn`.
- 2026-04-11: Etap 4 domknięty live; `ViewRender` daje kamerę lokalnego gracza, `view_angles` i syntetyczny `view_matrix`.
- 2026-04-11: Etap 5 domknięty live; minimalny reader snapshotu działa przez `cargo run -- snapshot`.
- 2026-04-11: Etap 6 domknięty; subtask spełnia warunek `DONE` z jawnymi ograniczeniami pól zaawansowanych.

## Niespodzianki i Odkrycia
- Do tej pory w repo odzyskano już live rooty: `dwGameEntitySystem`, `dwPrediction`, `dwViewRender`, `dwNetworkGameClient`, `dwInputSystem`.
- `master-farmer-case` nie jest lane'em testowym tego repo, ale jest twardą referencją kontraktu i algorytmu czytania pamięci.
- `GameEntitySystem` nie jest płaską tablicą pointerów do wszystkich chunków pod `+0x10 + 8 * chunk_index`; w live obiekcie widać osobne recordy chunków co najmniej pod `+0x10`, `+0x110`, `+0x118`, `+0x210`, `+0x220`, `+0x260`.
- Pierwszy chunk daje `worldent`, kontrolery oraz pawn-like `c_cs_player_for_precache`; nazwa klasy była myląca, ale live origin i backrefy potwierdzają funkcję tego obiektu.
- `csgo_previewplayer` siedzi w innych chunk records (`+0x110`, `+0x210`, `+0x260`), więc iteracja graczy nie może ślepo brać wszystkich records z `GameEntitySystem` jako jednej listy.
- `team-like field -> controller + 0x9C0` rozkłada się sensownie na `2/3` dla żywych kontrolerów i nadaje się do minimalnego readera.
- `ViewRender + 0x10` pokrywa się z `local_pawn_origin + view_offset`, więc jest semantycznie prawidłową kamerą lokalnego gracza.
- `ViewRender + 0x40` nie jest gotową klasyczną macierzą 4x4; to blok frustum rays, z którego trzeba odzyskać `forward/right/up`.
- `local_pawn + 0x1448` daje żywe `view_angles`, zgodne z kierunkiem odzyskanym z `ViewRender`.

## Dziennik Decyzji
- 2026-04-11: ten subtask ma być execution-ready i autonomiczny, bez pytania użytkownika między milestone'ami.
- 2026-04-11: priorytet ma odzyskanie chainów i minimalnego readera, nie pełna odbudowa wszystkich sygnatur.
- 2026-04-11: najpierw budować live reverse tooling (`entities`, `handle`, `handle-scan`), zamiast dalej robić ręczne hexdumpy i ad-hoc bash reverse.
- 2026-04-11: nie odrzucać obiektu tylko po designer name; o prawdzie decyduje live semantyka pól i chainów.

## Wyniki i Retrospektywa
- Subtask jest `DONE`.
- Dowieziony zakres:
  - chain do lokalnego controllera i pawna
  - iteracja innych graczy
  - lokalna kamera z `ViewRender`
  - `view_angles`
  - syntetyczny `view_matrix`
  - minimalny reader snapshotu zgodny semantycznie z `GameData`
- Otwarte poza zakresem:
  - `bones`
  - `bbox`
  - `is_targeted`
  - `map_name`
  - `game_phase`
  - pełne odzyskanie martwych sygnatur typu `dwEntityList`, `dwGlobalVars`, `dwGameRules`, `dwViewMatrix`, `dwViewAngles`
