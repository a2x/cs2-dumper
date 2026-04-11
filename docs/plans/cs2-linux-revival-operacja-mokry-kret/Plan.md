# Plan Wykonania

## Kontrakt Wykonania
- `Prompt.md` zamraża target i kryteria ukończenia.
- Ten plik jest żywym źródłem prawdy dla wykonania, restartu i decyzji.
- Po każdym etapie agent ma wykonać walidację, zaktualizować ten plik i od razu przejść do kolejnego nieukończonego etapu.
- Agent zatrzymuje się tylko przy globalnym `DONE` albo twardej blokadzie.
- `master-farmer-case` jest czytany jako referencja funkcjonalna; domyślny write scope pozostaje w tym repo.

## Strategia Testów i Walidacji
- Owner: attach i live pipeline
  - Source-of-truth lane: `CS2_PID=$(pgrep -x cs2 | head -n1) cargo test build_number -- --nocapture`
  - Cheap loop: `cargo build`
  - Harder gate: `CS2_PID=$(pgrep -x cs2 | head -n1) ./target/debug/cs2-dumper --pid "$CS2_PID" -vv`
- Owner: linux signatures i schema recovery
  - Source-of-truth lane: pełny live run dumpra na aktualnym `cs2`
  - Cheap loop: celowane testy offsetów i pojedyncze analizy (`build_number`, `global_vars`, `local_player_*`)
  - Harder gate: pełny dump bez krytycznego błędu na schemach i z aktualnymi artefaktami w `output/`
- Owner: reader kontraktu game_data
  - Source-of-truth lane: live reader smoke zwracający snapshot z pola­mi zgodnymi semantycznie z `master-farmer-case/game_data`
  - Cheap loop: testy jednostkowe mappera i pojedynczych łańcuchów odczytu
  - Harder gate: snapshot z lokalnego procesu gry z wypełnionym zestawem kluczowych pól
- Wymagane artefakty:
  - log ostatniej walidacji live
  - lista odzyskanych offsetów/schemas
  - opis niezamkniętego ryzyka
- Otwarte ryzyko walidacyjne:
  - PID procesu gry może się zmieniać między restartami sesji
  - część odczytów może wymagać alternatywnej ścieżki przez schemy zamiast prostego patternu

## Domyślna Walidacja
- `cargo build`
- `CS2_PID=$(pgrep -x cs2 | head -n1) cargo test build_number -- --nocapture`
- celowany live smoke dla aktualnie modyfikowanego offsetu lub readera

## Etap 1 — Fundamenty i kontrakt readera
- Stan: `ukończony`
- Cel: ustabilizować punkt startowy, potwierdzić attach/live smoke i zamrozić kontrakt danych do odczytu.
- Zakres:
  - utrzymać działający attach do procesu `cs2`
  - spisać kontrakt danych z `master-farmer-case/game_data`
  - udokumentować bieżące odkrycia i brakujące elementy linuxowego branchu
- Kryteria akceptacji:
  - istnieje powtarzalna komenda attachu/live smoke dla aktualnego procesu gry
  - kontrakt danych readera jest jawnie spisany i mapuje się na wymagane pola
  - plan zawiera bieżące odkrycia o stanie branchu linuxowego
- Walidacja:
  - `cargo build`
  - `CS2_PID=$(pgrep -x cs2 | head -n1) cargo test build_number -- --nocapture`
- Co dalej po sukcesie:
  - przejdź do Etapu 2 i zbuduj narzędzia do szybkiego odzyskiwania offsetów/schem
- Próg blokady:
  - brak działającego attachu do `cs2`
  - brak możliwości potwierdzenia podstawowego odczytu z pamięci
- Notatki decyzyjne:
  - stan początkowy z 2026-04-11: branch `linux` kompiluje się, attach po PID działa po lokalnej poprawce, `build_number` live przechodzi, pełny dumper pada na martwych sygnaturach i `SchemaSystem`

## Etap 2 — Narzędzia do live iteracji
- Stan: `ukończony`
- Cel: skrócić pętlę debugowania i przygotować małe narzędzia do sprawdzania pojedynczych offsetów, chainów i schem na żywym procesie.
- Zakres:
  - helpery do stabilnego wyboru PID
  - celowane smoke dla modułów `libclient.so`, `libengine2.so`, `libschemasystem.so`
  - diagnostyka patternów i odczytów pointer chain
- Kryteria akceptacji:
  - pojedynczy offset lub chain da się sprawdzić bez pełnego runu dumpra
  - narzędzia ujawniają, czy porażka wynika z patternu, chaina, modułu czy schema layoutu
- Walidacja:
  - `cargo build`
  - co najmniej jeden celowany smoke uruchomiony na żywym procesie
- Co dalej po sukcesie:
  - przejdź do Etapu 3 i odzyskaj minimalny zestaw krytycznych offsetów
- Próg blokady:
  - brak wystarczającej diagnostyki, żeby odróżnić błędy patternów od błędów layoutu
- Notatki decyzyjne:
  - preferuj małe binarki/testy live zamiast pełnego dumpa przy każdym eksperymencie

## Etap 3 — Minimalny zestaw krytycznych offsetów
- Stan: `w toku`
- Cel: odzyskać minimalne offsety potrzebne do pierwszego sensownego snapshotu gry.
- Zakres:
  - `dwBuildNumber`
  - `dwEntityList`
  - `dwLocalPlayerController`
  - `dwLocalPlayerPawn`
  - `dwViewMatrix`
  - `dwGlobalVars`
  - `dwViewAngles`
  - `dwGameRules` lub równoważna ścieżka dla `game_phase`
- Kryteria akceptacji:
  - każdy offset ma live smoke potwierdzający sens odczytu
  - `output/offsets.*` odzwierciedla aktualne wartości dla tych pól
- Walidacja:
  - celowane testy/smoke dla każdego offsetu
  - co najmniej jeden run dumpra, który znajduje odzyskane pozycje
- Co dalej po sukcesie:
  - przejdź do Etapu 4 i odblokuj `SchemaSystem`
- Próg blokady:
  - brak możliwości potwierdzenia semantyki wartości na żywym procesie
- Notatki decyzyjne:
  - windowsowy branch służy tylko do semantyki i przewidywanego chaina, nie do kopiowania patternów 1:1

## Etap 4 — SchemaSystem i pełny linux dump
- Stan: `w toku`
- Cel: przywrócić ścieżkę schema recovery i zdolność pełnego dumpra do generowania aktualnych artefaktów.
- Zakres:
  - odnalezienie aktualnej ścieżki do `libschemasystem.so`
  - walidacja struktur w `src/source2/schema_system/*`
  - regeneracja `output/*.json`, `*.rs`, `*.hpp`, `*.cs`
- Kryteria akceptacji:
  - pełny live run dumpra kończy się bez krytycznego błędu `unable to read schema system address`
  - artefakty są aktualne i spójne z live odczytami
- Walidacja:
  - `CS2_PID=$(pgrep -x cs2 | head -n1) ./target/debug/cs2-dumper -vv`
  - sanity check wybranych klas/pól z wygenerowanych artefaktów
- Co dalej po sukcesie:
  - przejdź do Etapu 5 i zbuduj reader kompatybilny z kontraktem `GameData`
- Próg blokady:
  - brak wiarygodnej ścieżki do schem mimo działających offsetów
- Notatki decyzyjne:
  - jeśli pełny schema dump okaże się zbyt kosztowny chwilowo, nie kończ taska bez minimalnego planu obejścia dla readera
  - `SchemaSystem_001` został odzyskany przez live interface/path recovery; aktualny drift dotyczy już głównie części layoutu `SchemaSystemTypeScope` i martwych sygnatur globali

## Etap 5 — Reader zgodny z kontraktem master-farmer-case
- Stan: `todo`
- Cel: dostarczyć w tym repo live reader snapshotu gry o tym samym kontrakcie semantycznym, co `master-farmer-case/game_data`.
- Zakres:
  - struktury danych snapshotu
  - odczyt lokalnego gracza
  - iteracja innych graczy
  - world-to-screen, bones, bbox i `is_targeted`
  - mapowanie na linuxowe moduły i offsety/schemy
- Kryteria akceptacji:
  - reader zwraca komplet kluczowych pól z żywego procesu gry
  - kontrakt jest jawnie porównany z referencją windowsową
- Walidacja:
  - live snapshot print / test / smoke z działającego procesu
  - porównanie pól z listą z `master-farmer-case/game_data`
- Co dalej po sukcesie:
  - przejdź do Etapu 6 i napraw wykryte edge-case’y
- Próg blokady:
  - brak jednej lub więcej krytycznych ścieżek odczytu dla danych readera
- Notatki decyzyjne:
  - reader ma być odporny na częściowe niepowodzenia odczytów, nie powinien panikować przy pojedynczym brakującym polu

## Etap 6 — Fiksy, hardening, regresje
- Stan: `todo`
- Cel: naprawić błędy wykryte w live smoke, zabezpieczyć regresje i domknąć ergonomię utrzymania.
- Zakres:
  - poprawki pointer chainów i guardów
  - błędy null/null-handle
  - ergonomia uruchomień i update flow po patchu gry
- Kryteria akceptacji:
  - znane błędy z poprzednich etapów są albo zamknięte, albo opisane jako świadome ryzyko
  - loop aktualizacji po przyszłym patchu gry jest opisany i używalny
- Walidacja:
  - rerun krytycznych smoke
  - pełny build i live run
- Co dalej po sukcesie:
  - przejdź do Etapu 7 i zamknij task
- Próg blokady:
  - regresje uniemożliwiające stabilny live snapshot albo pełny dump
- Notatki decyzyjne:
  - priorytet mają poprawki wpływające na liveness i poprawność odczytu

## Etap 7 — Finalna walidacja i przekazanie
- Stan: `todo`
- Cel: wykonać finalny gate i zostawić repo w stanie restartowalnym po długiej przerwie.
- Zakres:
  - końcowe testy
  - aktualizacja dokumentacji taska
  - zapis ostatniego werdyktu i otwartych ryzyk
- Kryteria akceptacji:
  - wszystkie kryteria z `Prompt.md` są spełnione albo jawnie zablokowane
  - komendy run/test/update są opisane
  - ostatnia walidacja live jest zapisana
- Walidacja:
  - pełny build
  - pełny live run dumpra
  - live reader smoke
- Co dalej po sukcesie:
  - oznacz task jako `DONE`
- Próg blokady:
  - brak pełnego gate’u przed końcem
- Notatki decyzyjne:
  - nie zamykaj taska na podstawie przypuszczeń; wymagaj obserwowalnego efektu

## Postęp
- 2026-04-11: sklonowano `a2x/cs2-dumper`, przełączono na branch `linux`.
- 2026-04-11: potwierdzono, że branch `linux` jest istotnie opóźniony względem `main`.
- 2026-04-11: wprowadzono lokalną poprawkę attachu po PID oraz wsparcie `CS2_PID`.
- 2026-04-11: live walidacja `build_number` przeszła na uruchomionym procesie gry.
- 2026-04-11: pełny live run dumpra ujawnił masowo martwe sygnatury oraz błąd `unable to read schema system address`.
- 2026-04-11: ustalono kontrakt danych referencyjnych na podstawie `master-farmer-case/game_data`.
- 2026-04-11: Etap 1 uznano za zamknięty; aktywny jest Etap 2 skupiony na narzędziach do szybkiej live iteracji.
- 2026-04-11: dodano subkomendy `modules` i `probe`, obsługę źródeł `generated/config`, odczyty `u32/u64/ptr/f32/vec3/mat4/string-ptr/bytes` oraz automatyczne wybieranie procesu `cs2` bieżącego użytkownika.
- 2026-04-11: Etap 2 uznano za zamknięty; aktywny jest Etap 3 skupiony na odzyskiwaniu krytycznych offsetów i walidacji ich semantyki.
- 2026-04-11: odzyskano ścieżkę do `SchemaSystem` przez `libschemasystem.so` i wprowadzono live smoke `schema-scopes`.
- 2026-04-11: pełny run dumpra przestał panikować na `UtlTsHash`; błędne enum-hashe są logowane i pomijane zamiast zabijać proces.
- 2026-04-11: pełny `./target/debug/cs2-dumper -vv` kończy się już kodem `0` i generuje artefakty mimo martwych sygnatur; `output/info.json` zapisuje `build_number: null`, gdy offset nie został jeszcze odzyskany.
- 2026-04-11: potwierdzono live `dwGameEntitySystem` i `dwViewRender`; odzyskano też singleton `NetworkClientService_001` przez interfejs `libengine2.so`.
- 2026-04-11: dodano subkomendę `singleton`, która rozwiązuje adres singletona interfejsu i pozwala go od razu odczytywać live.
- 2026-04-11: dodano wąskie fallbacki offsetów przez interfejsy dla `dwPrediction`, `dwNetworkGameClient` i `dwInputSystem`.
- 2026-04-11: pełny live run dumpra zapisuje już w `output/offsets.json` także `dwPrediction`, `dwNetworkGameClient` i `dwInputSystem`.
- 2026-04-11: utworzono focused execution bundle [docs/plans/cs2-reader-chain-operacja-szary-borsuk/Plan.md](/home/sieciowiec/dev/rust/cs2-memory-reader/docs/plans/cs2-reader-chain-operacja-szary-borsuk/Plan.md) dla chaina lokalnego gracza, entity system i minimalnego readera.
- 2026-04-11: focused bundle `cs2-reader-chain-operacja-szary-borsuk` został domknięty jako `DONE`; repo ma już działający minimalny reader snapshotu (`cargo run -- snapshot`), live kamerę z `ViewRender` (`cargo run -- camera`) i syntetyczny `view_matrix`.

## Niespodzianki i Odkrycia
- Aktualny lokalny proces gry jest natywnym `cs2`, nie `cs2.exe`.
- `memflow-native` na tym branchu ma kłopot z pełnym skanowaniem procesów po nazwie; attach po PID obchodzi problem.
- Nie wszystkie stare linuxowe patterny są tylko „trochę przesunięte”; duża część nie znajduje żadnego matcha.
- `master-farmer-case` czyta więcej niż tylko podstawowe offsety; docelowy reader musi obsłużyć też kości, bbox, W2S i lokalny snapshot stanu.
- W systemie działają równolegle dwa procesy `cs2`; automatyka musi preferować proces należący do bieżącego użytkownika, inaczej attach łapie zły PID.
- Stare `output/offsets.json` zawiera tylko część potrzebnych globali i co najmniej część jego wartości jest semantycznie podejrzana na aktualnej wersji gry.
- Aktualny `output/offsets.json` po live runie zawiera na razie tylko potwierdzone pozycje (`dwGameEntitySystem`, `dwViewRender`), co jest bezpieczniejsze niż utrzymywanie martwych wartości.
- Aktualny `output/offsets.json` po fallbackach interfejsowych zawiera potwierdzone pozycje: `dwGameEntitySystem`, `dwPrediction`, `dwViewRender`, `dwNetworkGameClient`, `dwInputSystem`.
- `SchemaSystemTypeScope` ma częściowo aktualny layout: klasy dają użyteczne pola, ale enum-hashe dla `libclient.so` i `libserver.so` nadal są rozjechane.
- `ViewRender` nie daje klasycznego gotowego `dwViewMatrix`; aktualny linuxowy reader musi składać kamerę z frustum rays, FOV i local pawn `view_offset`.

## Dziennik Decyzji
- 2026-04-11: `master-farmer-case` traktować jako repo referencyjne read-only dla kontraktu danych i technik czytania pamięci.
- 2026-04-11: nie kopiować windowsowych patternów 1:1; używać ich jedynie jako semantycznej referencji.
- 2026-04-11: najpierw odzyskać minimalne offsety i attach/live loop, dopiero potem pełny schema dump.
- 2026-04-11: do codziennej iteracji używać wbudowanego `probe`, a nie pełnego dumpa; pełny dump zostaje gate'em, nie podstawowym loopem.
- 2026-04-11: pełny dump ma być tolerancyjny na brak `dwBuildNumber` i błędne enum-hashe, żeby zostawiać świeże artefakty do dalszego reverse'u.

## Wyniki i Retrospektywa
- Jeszcze nieukończone.
