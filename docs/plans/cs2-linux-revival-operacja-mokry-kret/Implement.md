# Instrukcja Wykonawcza

## Tryb pracy
- Ten bundle jest w trybie `wykonanie`.
- Czytaj `Prompt.md` jako zamrożoną specyfikację.
- Czytaj `Plan.md` jako żywe źródło prawdy i aktualizuj go po każdym etapie.
- Czytaj `Documentation.md` jako pomocniczą pamięć operacyjną.
- Trzymaj się root [AGENTS.md](/home/sieciowiec/dev/rust/cs2-memory-reader/AGENTS.md) jako repo-wide control plane.

## Kolejność
- Startuj od pierwszego etapu w `Plan.md`, który nie ma statusu ukończonego.
- Po ukończeniu etapu uruchom zapisaną dla niego walidację.
- Jeśli walidacja nie przejdzie, napraw problem przed przejściem dalej.
- Jeśli etap przejdzie walidację, zaktualizuj `Plan.md` i `Documentation.md`, a następnie od razu przejdź do kolejnego etapu.
- Nie pytaj użytkownika o „co dalej?” między etapami.
- Nie rób status-only przystanków ani proposal-first pause, jeśli nie ma realnego `BLOCKED`.

## Zasady wykonawcze
- Najpierw odpal najtańszy poprawny lane lokalny.
- Nie udawaj, że samo `cargo test` zamyka temat, jeśli etap wymaga live smoke lub pełnego dumpa.
- Preferuj małe eksperymenty i narzędzia celowane zamiast pełnego runu dumpra przy każdej zmianie.
- Gdy odwołujesz się do `master-farmer-case`, traktuj go jako wzorzec danych i technik, nie jako miejsce docelowych zmian, chyba że plan jawnie to rozszerzy.
- Gdy używasz internetu, zapisuj tylko wnioski potrzebne do taska; nie rozdmuchuj dokumentacji.
- Nie rozszerzaj zakresu na overlay, input automation ani windowsowy support.
- W execution mode upór jest domyślny: jeśli jest kolejny rozsądny krok, wykonaj go bez pytania użytkownika.

## Walidacja
- Dla attachu i podstawowego liveness:
  - `cargo build`
  - `CS2_PID=$(pgrep -x cs2 | head -n1) cargo test build_number -- --nocapture`
- Dla offsetów i schem:
  - celowany smoke dla pojedynczego offsetu lub chaina
  - `CS2_PID=$(pgrep -x cs2 | head -n1) ./target/debug/cs2-dumper -vv`
- Dla readera:
  - live snapshot zwracający wymagane pola
  - porównanie semantyczne z kontraktem z `master-farmer-case/game_data`

## Reguły zamknięcia
- Nie zamykaj taska bez przejścia przez hard gate’y z `Plan.md` albo bez jawnej sekcji blokady.
- Jeśli pełny gate nie był możliwy, zapisz dokładnie:
  - co zostało sprawdzone
  - czego nie udało się sprawdzić
  - jakie ryzyko zostaje otwarte
- Przy twardej blokadzie zatrzymaj się dopiero po zapisaniu stanu, komend i następnego sensownego kroku w `Plan.md` i `Documentation.md`.
