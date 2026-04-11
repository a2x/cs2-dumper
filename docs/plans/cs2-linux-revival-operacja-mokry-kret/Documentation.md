# Dokumentacja Operacyjna

## Bieżący Stan
- Status bundle: `gotowe do wykonania`
- Aktywny etap: `Etap 3 — Minimalny zestaw krytycznych offsetów`
- Repo docelowe: `/home/sieciowiec/dev/rust/cs2-memory-reader`
- Repo referencyjne read-only: `/home/sieciowiec/dev/rust/master-farmer-case`

## Zrobione
- Potwierdzono, że branch `linux` jest stary względem `main` i wymaga realnej reanimacji, nie kosmetyki.
- Potwierdzono obecność żywego procesu `cs2` oraz modułów `libclient.so`, `libengine2.so`, `libschemasystem.so`.
- Dodano ścieżkę attachu po PID i `CS2_PID`, co pozwoliło ominąć problem skanowania procesów po nazwie.
- Potwierdzono live odczyt `build_number`.
- Zidentyfikowano docelowy kontrakt danych z `master-farmer-case/game_data`.
- Zamknięto Etap 1 i przeniesiono wykonanie do etapu budowy szybkich narzędzi live/debug.
- Dodano wbudowane narzędzia `modules` i `probe` do szybkiego live debugowania modułów, offsetów i odczytów danych.
- Poprawiono automatyczny wybór procesu `cs2`, aby preferował proces bieżącego użytkownika przy współistnieniu wielu sesji gry.
- Zamknięto Etap 2 i przeniesiono wykonanie do etapu odzyskiwania krytycznych offsetów.
- Odzyskano ścieżkę do `SchemaSystem` przez live pattern/interface recovery w `libschemasystem.so`.
- Dodano live smoke `schema-scopes`, który wypisuje aktualne `type_scopes` oraz surowe nagłówki hashy.
- Zabezpieczono parser `UtlTsHash`, żeby layout drift nie kończył się panicem.
- Pełny `./target/debug/cs2-dumper -vv` kończy się już kodem `0` i zapisuje świeże artefakty nawet przy brakujących sygnaturach.
- `output/info.json` jest teraz tolerancyjny na brak `dwBuildNumber` i zapisuje `null` zamiast wywalać cały run.
- Potwierdzono live `dwGameEntitySystem` i `dwViewRender` na aktualnym `libclient.so`.
- Potwierdzono live singleton `NetworkClientService_001` na aktualnym `libengine2.so`.
- Dodano subkomendę `singleton` do szybkiego rozwiązywania adresów singletonów interfejsów.
- Dodano fallbacki offsetów przez interfejsy dla `dwPrediction`, `dwNetworkGameClient` i `dwInputSystem`.
- Potwierdzono live:
  - `dwPrediction -> Source2ClientPrediction001`
  - `dwNetworkGameClient -> NetworkClientService_001`
  - `dwInputSystem -> InputSystemVersion001`
- Domknięto focused subtask `cs2-reader-chain-operacja-szary-borsuk`:
  - lokalny controller/pawn chain działa live
  - iteracja innych graczy działa live
  - `ViewRender` daje lokalną kamerę
  - istnieje syntetyczny `view_matrix`
  - istnieje minimalny reader snapshotu przez `cargo run -- snapshot`

## Co Dalej
- Odzyskać prawdziwe, aktualne offsety dla `dwEntityList`, `dwLocalPlayerController`, `dwLocalPlayerPawn`, `dwViewMatrix`, `dwGlobalVars`, `dwViewAngles`, `dwGameRules`.
- Zweryfikować, czy ścieżka przez `NetworkClientService_001` + `dwGameEntitySystem` pozwoli ominąć brak `dwLocalPlayerController` jako osobnego globalu.
- Zweryfikować, czy `dwPrediction` albo `NetworkClientService_001` prowadzi do lokalnego pawna / lokalnego controllera bez potrzeby odzyskiwania osobnych globali na początku.
- Potwierdzić semantycznie, które stare generated offsets nadal są użyteczne, a które tylko zwracają przypadkowe dane.
- Rozszerzyć minimalny reader o pola zaawansowane:
  - `bones`
  - `bbox`
  - `is_targeted`
  - `map_name`
  - `game_phase`

## Run / Demo
- Build:
```bash
cargo build
```
- Podstawowy live smoke:
```bash
cargo test build_number -- --nocapture
```
- Pełny live run dumpra:
```bash
./target/debug/cs2-dumper -vv
```
- Camera / reader smoke:
```bash
cargo test view_render_camera_smoke -- --nocapture
cargo test game_data_snapshot_smoke -- --nocapture
cargo run -- camera
cargo run -- snapshot
```
- Live smoke schema scope'ów:
```bash
./target/debug/cs2-dumper schema-scopes
```
- Live singleton interfejsu:
```bash
./target/debug/cs2-dumper singleton libengine2.so NetworkClientService_001
./target/debug/cs2-dumper singleton libclient.so Source2ClientPrediction001
./target/debug/cs2-dumper singleton libinputsystem.so InputSystemVersion001
```
- Listowanie modułów:
```bash
./target/debug/cs2-dumper modules
```
- Probe pojedynczego offsetu:
```bash
./target/debug/cs2-dumper probe libengine2.so dwBuildNumber --source generated --read u32
```

## Ostatnia Walidacja
- Data: 2026-04-11
- Wynik:
  - `cargo build` przechodzi
  - `cargo test build_number -- --nocapture` nadal przechodzi jako smoke attachu, ale nie jest traktowany jako semantyczny dowód poprawnego `dwBuildNumber`
  - `./target/debug/cs2-dumper modules`, `probe`, `scan`, `interfaces` i `schema-scopes` działają na żywym procesie gry
  - `./target/debug/cs2-dumper singleton ...` działa na żywym procesie gry
  - pełny `./target/debug/cs2-dumper -vv` kończy się kodem `0`
  - `cargo test view_render_camera_smoke -- --nocapture` przechodzi
  - `cargo test game_data_snapshot_smoke -- --nocapture` przechodzi
  - `cargo run -- camera` przechodzi
  - `cargo run -- snapshot` przechodzi
  - `output/info.json` zapisuje świeży timestamp i `build_number: null`
  - w aktualnym live runie zapisują się świeże schemy i offsety, a `output/offsets.json` zawiera już `dwGameEntitySystem`, `dwPrediction`, `dwViewRender`, `dwNetworkGameClient`, `dwInputSystem`

## Znane Problemy
- Pełny dumper nie znajduje wielu kluczowych sygnatur w `config.json`.
- `SchemaSystem` nie jest już blockerem, ale część layoutu `SchemaSystemTypeScope`/`enum_bindings` nadal jest rozjechana względem starego brancha linux.
- Testy readerowe jeszcze nie istnieją dla linuxowego kontraktu `GameData`.
- Część starych generated offsets może dawać poprawny typ odczytu, ale nieprawidłową semantykę dla aktualnej wersji gry.
- Aktualny dump odzyskuje na razie tylko niewielki podzbiór globali (`dwGameEntitySystem`, `dwViewRender`), więc reader nie jest jeszcze gotowy.
- Aktualny dump odzyskuje już część rootów przez fallbacki interfejsowe, ale nadal brakuje krytycznych ścieżek do lokalnego gracza i `view_matrix`.
- Reader minimalny istnieje, ale pola zaawansowane (`bones`, `bbox`, `is_targeted`, `map_name`, `game_phase`) są nadal niekompletne.

## Blokady
- Brak twardej blokady na start. Główny koszt to reverse aktualnych patternów i ścieżek schema dla linuxowych `.so`.

## Otwarte Ryzyko Walidacyjne
- Aktualizacja gry w trakcie taska może unieważnić odzyskane patterny.
- Część danych readera może wymagać ścieżek schema innych niż w windowsowym pipeline z `master-farmer-case`.
