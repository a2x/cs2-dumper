# Instrukcja Wykonawcza

## Tryb pracy
- Ten bundle jest w trybie `wykonanie`.
- Czytaj `Prompt.md` jako zamrożoną specyfikację.
- Czytaj `Plan.md` jako living source of truth.
- Czytaj `Documentation.md` jako pomocniczą pamięć i restart capsule.
- Trzymaj się root [AGENTS.md](/home/sieciowiec/dev/rust/cs2-memory-reader/AGENTS.md) jako repo-wide control plane.

## Kolejność
- Startuj od pierwszego milestone'u bez statusu `done`.
- Po każdym milestone:
  - wykonaj walidację,
  - jeśli nie przejdzie, napraw problem,
  - zaktualizuj `Plan.md` i `Documentation.md`,
  - przejdź od razu do kolejnego milestone'u.
- Nie pytaj użytkownika o `next steps` między milestone'ami.
- Zatrzymuj się wyłącznie przy `DONE` albo realnym `BLOCKED`.

## Zasady wykonawcze
- Najpierw odpal najtańszy poprawny lane lokalny.
- Preferuj małe eksperymenty i live tooling (`singleton`, `probe`, `addr`, `scan`) zamiast ciężkich zmian bez dowodu.
- Każdy candidate chain traktuj jako hipotezę, dopóki nie przejdzie walidacji semantycznej.
- `master-farmer-case` jest referencją read-only. Bierz z niego:
  - kontrakt pól,
  - algorytm iteracji encji,
  - relacje controller -> pawn,
  - semantykę snapshotu.
- Nie traktuj `master-farmer-case` jako lane'u wykonawczego dla zmian w tym repo. Używaj go jako read-only oracle kontraktu.
- Jeśli w tym repo jeszcze brakuje testu dla nowej ścieżki, dopisz mały test lub live smoke helper zamiast zostawiać chain bez dowodu.

## Walidacja
- Root chain recovery:
  - `cargo build`
  - `cargo test interface_fallback_offsets -- --nocapture`
  - `./target/debug/cs2-dumper singleton <module> <interface>`
  - `./target/debug/cs2-dumper probe <module> <name> --source config|generated`
- Entity system:
  - live `addr/probe` dla chunków, handle'i i encji
  - porównanie do algorytmu z `master-farmer-case/game_data.rs`
- Minimal reader:
  - live snapshot print / test / smoke
  - porównanie z referencyjnymi polami `GameData`

## Reguły zamknięcia
- Nie zamykaj subtaska bez jawnego verdictu dla:
  - local player chain
  - entity system iteration
  - `view_matrix`
  - `view_angles`
  - minimal reader snapshot
- Jeśli któryś element nie jest jeszcze odzyskany, zapisz:
  - co sprawdzono,
  - co zawiodło,
  - jaki jest następny najlepszy krok.
