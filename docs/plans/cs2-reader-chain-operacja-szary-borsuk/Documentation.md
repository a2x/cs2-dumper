# Dokumentacja Operacyjna

## Bieżący Stan
- Status bundle: `DONE`
- Aktywny etap: `brak`
- Repo docelowe: `/home/sieciowiec/dev/rust/cs2-memory-reader`
- Repo referencyjne read-only: `/home/sieciowiec/dev/rust/master-farmer-case`

## Zrobione
- W repo docelowym działają już:
  - `SchemaSystem`
  - pełny `./target/debug/cs2-dumper -vv`
  - live tooling: `modules`, `interfaces`, `scan`, `probe`, `addr`, `schema-scopes`, `singleton`
- Odzyskane rooty:
  - `dwGameEntitySystem`
  - `dwPrediction`
  - `dwViewRender`
  - `dwNetworkGameClient`
  - `dwInputSystem`
- Potwierdzono referencyjny kontrakt i algorytm czytania pamięci w:
  - `/home/sieciowiec/dev/rust/master-farmer-case/game_data/src/game_data.rs`
- Dodano live tooling do reverse'u entity chainów:
  - `entities`
  - `handle`
  - `handle-scan`
  - `entity-chunk`
- Etap 1 został zamrożony:
  - kontrakt minimalny readera jest jawny
  - rooty wejściowe są spisane
  - `dwPrediction + 0x148` zostało odrzucone live
- Etap 2 został domknięty live:
  - lokalny controller to slot `1`
  - `0x9E0` jest pointerem do nazwy gracza
  - `0xA94/0xA98/0xA9C/0xAB4` są użyteczne semantycznie
  - `0x9C0` wygląda jak team-like field
  - `0xA8C` prowadzi do pawn-like obiektu gracza
  - `pawn + 0x1540` daje live origin
  - `pawn + 0x1558/0x155C/0x1600` wraca do właściwego controller handle
  - `pawn + 0x4A8` daje scene-node-like ptr, a `+0xD0` zgadza się z originem
- Etap 3 został domknięty live:
  - iteracja graczy działa przez chunk `0` kontrolerów
  - `controller + 0x9C0` daje sensowny team-like field `2/3`
  - `controller + 0xA8C` + pawn-like chain działa dla wielu graczy, nie tylko lokalnego
  - globalny `GameEntitySystem` nie jest 1:1 zgodny z windowsowym `entity_list`
- Etap 4 został domknięty live:
  - `ViewRender` daje semantycznie prawidłową kamerę lokalnego gracza
  - `camera_origin == pawn_origin + view_offset` jest potwierdzone
  - `local_pawn + 0x1448` daje żywe `view_angles`
  - `view_matrix` jest składany syntetycznie z frustum rays + FOV
- Etap 5 został domknięty live:
  - istnieje `src/reader.rs`
  - `snapshot` zwraca minimalny kontrakt `GameData`
  - `local_player_state` i `other_players` działają na żywym `cs2`
- Etap 6 został domknięty:
  - końcowa walidacja przeszła
  - bundle jest restartowalny bez czytania czatu

## Co Dalej
- Wrócić do głównego bundle `mokry-kret` i dalej odzyskiwać martwe sygnatury globali.
- Rozszerzyć reader o pola zaawansowane:
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
- Root fallback smoke:
```bash
cargo test interface_fallback_offsets -- --nocapture
```
- Camera smoke:
```bash
cargo test view_render_camera_smoke -- --nocapture
cargo run -- camera
```
- Reader smoke:
```bash
cargo test game_data_snapshot_smoke -- --nocapture
cargo run -- snapshot
```
- Entity system smoke:
```bash
cargo test entity_system_slots_smoke -- --nocapture
cargo test local_controller_pawn_chain_smoke -- --nocapture
cargo test player_controller_iteration_smoke -- --nocapture
./target/debug/cs2-dumper entities --count 160 --contains player
./target/debug/cs2-dumper handle 0x1
./target/debug/cs2-dumper handle-scan 0x007F290A951C00 --start 0x800 --end 0xB20 --contains player
./target/debug/cs2-dumper entity-chunk 0x007F2B9A528DC8 --count 512 --contains player
```
- Live singleton smoke:
```bash
./target/debug/cs2-dumper singleton libengine2.so NetworkClientService_001
./target/debug/cs2-dumper singleton libclient.so Source2ClientPrediction001
```
- Live current roots:
```bash
./target/debug/cs2-dumper probe libclient.so dwGameEntitySystem --source generated --read ptr
./target/debug/cs2-dumper probe libclient.so dwPrediction --source config
./target/debug/cs2-dumper probe libengine2.so dwNetworkGameClient --source config
```
- Referencja kontraktu:
```bash
sed -n '214,460p' /home/sieciowiec/dev/rust/master-farmer-case/game_data/src/game_data.rs
```

## Ostatnia Walidacja
- Data: 2026-04-11
- Wynik:
  - `cargo build` przechodzi
  - `cargo test interface_fallback_offsets -- --nocapture` przechodzi
  - `cargo test view_render_camera_smoke -- --nocapture` przechodzi
  - `cargo test game_data_snapshot_smoke -- --nocapture` przechodzi
  - `cargo test entity_system_slots_smoke -- --nocapture` przechodzi
  - `cargo test local_controller_pawn_chain_smoke -- --nocapture` przechodzi
  - `cargo test player_controller_iteration_smoke -- --nocapture` przechodzi
  - pełny `./target/debug/cs2-dumper -vv` przechodzi
  - `cargo run -- camera` przechodzi
  - `cargo run -- snapshot` przechodzi
  - `./target/debug/cs2-dumper entities --count 160 --contains player` potwierdza live kontrolery w chunku `0`
  - `./target/debug/cs2-dumper handle 0x1` rozwiązuje się do slotu `1` z nazwą `cs_player_controller`
  - `./target/debug/cs2-dumper handle-scan 0x007F290A951C00 --start 0x800 --end 0xB20 --contains player` potwierdza, że `0xA8C` prowadzi do pawn-like obiektu gracza
  - `cargo test player_controller_iteration_smoke -- --nocapture` potwierdza iterację wielu graczy live
  - `output/offsets.json` zawiera już odzyskane rooty potrzebne do tego subtaska
  - minimalny snapshot zawiera:
    - `view_matrix`
    - `local_player_state`
    - `other_players`

## Znane Problemy
- Layout entity system/listy nie jest jeszcze potwierdzony semantycznie; live obiekt ma wiele chunk records, a nie prostą tablicę pointerów.
- `dwViewMatrix` i `dwViewAngles` nie są odzyskane jako klasyczne globale; reader działa dziś przez fallback na `ViewRender` + local pawn.
- Zaawansowane pola snapshotu (`bones`, `bbox`, `is_targeted`) nie są jeszcze dowiezione.
- `map_name` i `game_phase` są nadal `None`.

## Blokady
- Brak. Bundle został domknięty jako `DONE`.

## Otwarte Ryzyko Walidacyjne
- Część referencyjnych pól może wymagać dodatkowych linuxowych chainów po zakończeniu tego subtaska.
- Entity system może być semantycznie podobny do windowsowego, ale nieidentyczny w layoutcie chunków lub indeksów.
