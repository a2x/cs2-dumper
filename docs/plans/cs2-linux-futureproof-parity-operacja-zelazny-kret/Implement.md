# Wykonanie — Pełna future-proof reanimacja linuxowego dumpra i readera CS2

## Źródła prawdy
- `Prompt.md` = zamrożony target i kryteria sukcesu.
- `Plan.md` = żywe źródło prawdy dla etapów, walidacji, decyzji i postępu.
- `Documentation.md` = pomocnicza pamięć restartowa, ostatni verdict i następny krok.
- Windows branch i `master-farmer-case` = read-only referencja semantyczna przed każdą implementacją slice’a.

## Tryb wykonania
1. Przeczytaj `Prompt.md`.
2. Przeczytaj `Plan.md`.
3. Zacznij od pierwszego etapu bez statusu `done`.
4. Realizuj jeden etap na raz.
5. Jeśli etap jest zbyt duży, rozbij go w `Plan.md` i kontynuuj bez pytania użytkownika.
6. Po każdym etapie:
   - uruchom walidację z planu,
   - jeśli walidacja nie przejdzie, napraw problem przed przejściem dalej,
   - jeśli walidacja przejdzie, zaktualizuj `Plan.md` i `Documentation.md`,
   - przejdź od razu do następnego nieukończonego etapu.
7. Nie pytaj użytkownika o `next steps` między etapami.
8. Zatrzymuj się tylko przy globalnym `DONE` albo twardym `BLOCKED`.

## Zasady implementacji
- Przed każdą implementacją feature slice otwórz odpowiedni kod z windowsowego brancha albo `master-farmer-case` i zapisz semantykę w planie, jeśli jeszcze nie jest jawna.
- Najpierw próbuj:
  - `interfaces`
  - `singletony`
  - `schema`
  - `semantic chains`
- Pattern dopuszczaj dopiero wtedy, gdy:
  - nie ma stabilniejszego obejścia
  - root jest naprawdę potrzebny dla dumpra lub parity
  - masz semantyczny smoke potwierdzający poprawność
- Nie buduj długich, kruchych patternów tylko po to, żeby mieć jeden match.
- Nie rozszerzaj kodu bez wyraźnego zysku utrzymaniowego.
- Preferuj małe, wielokrotnego użytku helpery i jeden source of truth per dane.
- Reader ma degradować się kontrolowanie do `None` / `false`, nie panikować przy pojedynczym brakującym polu.

## Zasady testów
- Zawsze odpal najtańszy poprawny lane lokalny najpierw.
- Nie traktuj `cargo test` jako substytutu live smoke, jeśli plan wymaga walidacji na żywym `cs2`.
- Jeśli pełny gate nie był możliwy, zapisz dokładnie:
  - co zostało sprawdzone,
  - czego nie udało się sprawdzić,
  - jakie ryzyko pozostało otwarte.
- Nie zamykaj taska bez pełnego gate’u z `Prompt.md` albo jawnego `BLOCKED`.

## Zasady ukończenia
- Task nie jest skończony, dopóki:
  - parity nie jest dowieziona albo jawnie ograniczona przez live Linux,
  - update workflow nie jest opisany,
  - pełny gate nie przeszedł.
- `DONE` wymaga:
  - aktualnego `Plan.md`,
  - aktualnego `Documentation.md`,
  - zapisanych rootów i ich źródeł prawdy,
  - jawnych ryzyk resztkowych.
