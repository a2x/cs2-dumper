# AGENTS.md

## Cel Repo
- Repo służy do linuxowego dumpowania offsetów/schem CS2 i dobudowania readera pamięci zgodnego semantycznie z `master-farmer-case/game_data`.
- `master-farmer-case` jest referencją read-only dla kontraktu danych i technik odczytu. Nie jest domyślnym miejscem zmian.

## Start Here
- Czytaj ten plik jako repo-wide control plane.
- Dla długiego taska używaj bundle w `docs/plans/<task-slug>/`.
- Dla bieżącej pełnej parity i future-proof reanimacji linuxa źródłem prawdy wykonania jest:
  - [docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Prompt.md](/home/sieciowiec/dev/rust/cs2-memory-reader/docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Prompt.md)
  - [docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Plan.md](/home/sieciowiec/dev/rust/cs2-memory-reader/docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Plan.md)
  - [docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Implement.md](/home/sieciowiec/dev/rust/cs2-memory-reader/docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Implement.md)
  - [docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Documentation.md](/home/sieciowiec/dev/rust/cs2-memory-reader/docs/plans/cs2-linux-futureproof-parity-operacja-zelazny-kret/Documentation.md)

## Execution Mode
- Przejdź do `Execution Mode`, gdy użytkownik zaakceptował kierunek i chce autonomicznej realizacji.
- Realizuj task autonomicznie end-to-end.
- Zacznij od pierwszego milestone'u bez statusu `done`.
- Po każdym milestone:
  - zrób walidację,
  - zaktualizuj plan,
  - przejdź od razu do następnego.
- Nie pytaj użytkownika o `next steps` między milestone'ami.
- Nie rób status-only przystanków. Krótkie commentary jest do raportowania postępu, nie do proszenia o zgodę.
- Pytania użytkownika o `postęp`, `ile %`, `co dalej`, `na czym stoisz` albo `czy pomaga branch windows` nie pauzują execution.
  Odpowiedz krótko i wróć od razu do bieżącego milestone'u.
- Aktualizacja `Plan.md`, `Documentation.md` albo krótkie podsumowanie odkrycia nie jest powodem do zatrzymania runu.
- Nie emituj close-outu dla pracy w toku.
  Kanał `final` jest dozwolony tylko przy:
  - `DONE`,
  - realnym `BLOCKED`,
  - albo gdy użytkownik jawnie zleca osobny meta-task typu audyt / rewrite / raport niezależny od głównego execution.
- Jeśli odpowiadasz użytkownikowi w trakcie execution, domyślnym kanałem jest `commentary`, a po odpowiedzi wracasz do wykonania bez nowego pozwolenia.
- Zatrzymaj się tylko przy `DONE` albo realnym `BLOCKED`.
- `BLOCKED` oznacza brak kolejnego bezpiecznego kroku mimo lokalnej diagnostyki, nie zwykłą niepewność ani nieukończony reverse.

## Durable Memory
- `AGENTS.md` jest mapą zachowania, nie pamięcią taska.
- `docs/plans/<task>/Plan.md` jest living source of truth dla milestone'ów, decyzji i postępu.
- `docs/plans/<task>/Documentation.md` trzyma restart capsule:
  - ostatni stan,
  - ostatni verdict walidacji,
  - następny krok,
  - otwarte ryzyka.
- Nie trzymaj żywego stanu taska tylko w czacie.

## Zasady Zmian
- Zmiany mają być małe, precyzyjne i lokalnie uzasadnione.
- Preferuj odporność i degradację kontrolowaną nad hard-fail, jeśli to nie zaciera błędu.
- Nie kopiuj windowsowych patternów 1:1 do linuxowych `.so`.
- Windowsowy branch i `master-farmer-case` służą jako referencja semantyczna, nie jako gotowe wartości.

## Walidacja
- Najtańszy lane:
  - `cargo build`
- Live attach / smoke:
  - `cargo test interface_fallback_offsets -- --nocapture`
  - `./target/debug/cs2-dumper modules`
  - `./target/debug/cs2-dumper interfaces <module>`
  - `./target/debug/cs2-dumper singleton <module> <interface>`
  - `./target/debug/cs2-dumper probe <module> <name> --source config|generated`
- Hard gate przed `DONE`:
  - `./target/debug/cs2-dumper -vv`
  - live reader smoke dla kontraktu `GameData`

## DONE / BLOCKED
- `DONE` wymaga:
  - przejścia wymaganej walidacji dla ostatniego milestone'u,
  - aktualnego `Plan.md`,
  - aktualnego `Documentation.md`,
  - jawnego zapisu otwartego ryzyka, jeśli coś zostało poza zakresem.
- `DONE` nie oznacza `doszedłem do lokalnego subwyniku`.
  Nie zamykaj execution po pojedynczym odkryciu, po nowym toolingu ani po częściowym odblokowaniu pipeline'u.
- `BLOCKED` wymaga:
  - zapisania konkretnego blokera,
  - zapisania co sprawdzono,
  - zapisania następnego sensownego kroku po odblokowaniu.
