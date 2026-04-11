# Odzyskanie Local Player Chain i Minimalnego Readera

## Kryptonim
- Operacja Szary Borsuk

## Cel
- Odzyskać działający chain do lokalnego gracza na Linuksie bez czekania na komplet wszystkich sygnatur oraz zbudować pierwszy minimalny reader snapshotu gry oparty o aktualnie żywy proces `cs2`.

## Rezultaty
- Potwierdzony live chain prowadzący do lokalnego controllera i lokalnego pawna, wyprowadzony z co najmniej jednego z rootów:
  - `dwNetworkGameClient`
  - `dwPrediction`
  - `dwGameEntitySystem`
- Potwierdzona semantycznie baza entity system/listy wraz z:
  - strukturą chunków
  - miejscem `highestEntityIndex` albo udokumentowanym obejściem
  - werdyktem, czy iteracja może być taka sama jak w `master-farmer-case`
- Odzyskane live:
  - `dwViewMatrix`
  - `dwViewAngles`
- Minimalny reader w tym repo zwracający live snapshot z polami zgodnymi semantycznie z `master-farmer-case/game_data`, przynajmniej dla:
  - `view_matrix`
  - `game_phase` lub jawnie opisanego braku
  - `local_player_state` z kluczowymi polami:
    - `score`
    - `health`
    - `team_num`
    - `takes_damage`
    - `life_state`
    - `m_h_player_pawn`
    - `shots_fired`
    - `eye_angles`
    - `origin`
    - `view_origin`
    - `aim_punch_angle`
    - `view_angles`
    - `persona_level`
  - `other_players` z minimalnie:
    - `pawn_address`
    - `health`
    - `team_num`
    - `life_state`
- Jawny plan dalszego domknięcia pól bardziej zaawansowanych, jeśli w tym subtasku nie uda się jeszcze odzyskać:
  - `bones`
  - `bbox_2d`
  - `head_pos_2d`
  - `is_targeted`

## Poza Zakresem
- Pełne wskrzeszenie wszystkich linuxowych sygnatur w `config.json`.
- Finalne dopracowanie każdego pola schema dumpa.
- Overlay, input automation i windowsowy support.
- Edycje w `master-farmer-case`.

## Twarde Ograniczenia
- Żywy linuxowy proces `cs2` jest source of truth dla wszystkich chainów i walidacji.
- `master-farmer-case/game_data/src/game_data.rs` jest kontraktem referencyjnym i listą pól wymaganych semantycznie.
- Jeśli lokalny reader nie ma jeszcze własnych testów, trzeba walidować live smoke + porównanie semantyczne do referencji.
- Nie wolno uznać chaina za odzyskany tylko dlatego, że czyta się poprawny typ danych; potrzebna jest walidacja semantyczna.

## Kontrakt Jakości i Walidacji
- Owner: root chain recovery
  - Zakres: `src/analysis/*`, live tooling, recovered offsets/chains
  - Source-of-truth lane:
    - `./target/debug/cs2-dumper singleton libengine2.so NetworkClientService_001`
    - `./target/debug/cs2-dumper probe libclient.so dwGameEntitySystem --source generated --read ptr`
    - celowane `addr/probe/scan` dla lokalnego gracza
- Owner: minimal reader
  - Zakres: reader snapshot w tym repo i jego live smoke
  - Source-of-truth lane:
    - live snapshot z uruchomionego `cs2`
    - porównanie pól do kontraktu z `/home/sieciowiec/dev/rust/master-farmer-case/game_data/src/game_data.rs`
- Owner: contract parity / reference check
  - Zakres: semantyczna zgodność z `master-farmer-case`
  - Source-of-truth lane:
    - read-only diff wymaganego kontraktu pól i chainów
    - zachowanie równoważne dla local player i entity iteration
- Tani loop lokalny:
  - `cargo build`
  - `cargo test interface_fallback_offsets -- --nocapture`
  - pojedyncze `singleton`, `probe`, `addr`
- Gate przed `DONE`:
  - pełny `./target/debug/cs2-dumper -vv`
  - live minimal reader smoke
  - jawne porównanie do referencji `game_data.rs`
- Wymagane artefakty:
  - zaktualizowany living plan i documentation
  - świeże `output/offsets.json`
  - minimalny reader lub snapshot path
  - zapis ostatniej walidacji live
- Niewalidowane ryzyko:
  - część pól referencyjnych może wymagać dodatkowych linuxowych chainów po zakończeniu tego subtaska
  - layout entity system/listy może różnić się od windowsowego wzorca mimo podobnych rootów

## Ukończone Gdy
- Chain do lokalnego gracza jest potwierdzony live.
- Minimalny reader zwraca sensowny snapshot dla local player i entity iteration.
- `dwViewMatrix` i `dwViewAngles` są odzyskane lub mają jawnie opisane, działające obejście.
- Wynik i ryzyka są zapisane w bundle taska.
