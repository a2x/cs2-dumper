# Specyfikacja — Pełna future-proof reanimacja linuxowego dumpra i readera CS2
## Kryptonim
- Operacja Żelazny Kret

## Cel
- Dowieźć linuxowy branch do możliwie pełnej parity funkcjonalnej względem windowsowego brancha i kontraktu `master-farmer-case/game_data`, przy minimalnej liczbie sygnatur, małej ilości kodu, wysokiej odporności na game update oraz tanim workflow aktualizacji po przyszłych patchach gry.

## Rezultaty
- Linuxowy dumper offsetów/schem, który dalej kończy pełny run i generuje użyteczne artefakty po aktualnej wersji gry.
- Reader pamięci zgodny semantycznie z windowsowym `GameData` tam, gdzie live Linux daje te dane.
- Mały i stabilny zestaw linuxowych rootów:
  - preferowane `interfaces`
  - preferowane `schema`
  - preferowane `semantic chains`
  - patterny tylko dla niezbędnych globali
- Tooling do odzyskiwania sygnatur i semantycznej walidacji po game update.
- Smoke testy i kontrakt utrzymaniowy wykrywające drift wcześnie.

## Poza zakresem
- Kopiowanie windowsowych patternów 1:1 do linuxowych `.so`.
- Dublowanie wielu źródeł prawdy dla tych samych danych.
- Rozbudowa kodu pod funkcje niewymagane przez windowsowy kontrakt albo niepotwierdzone live na Linuksie.
- Sztuczne utrzymywanie klasycznych globali, jeśli semantycznie stabilniejszy jest interface albo chain obiektowy.

## Twarde ograniczenia
- Przed każdą implementacją feature slice czytaj odpowiedni kod z windowsowego brancha albo `master-farmer-case`, ale traktuj go wyłącznie jako referencję semantyczną.
- Preferuj `interfaces`, `singleton`, `schema` i `semantic chains` ponad patterny.
- Patterny buduj tylko dla rootów, których nie da się stabilnie odzyskać inaczej.
- Zmiany mają być małe, precyzyjne i audytowalne.
- Kod ma degradować się kontrolowanie zamiast panicować.
- Każdy slice ma przejść tani loop lokalny i live smoke.
- Nie zamykaj taska z “ładnym partialem”; task jest skończony dopiero, gdy parity i update workflow są domknięte albo jawnie ograniczone przez live Linux.

## Ukończone gdy
- Linux branch umie:
  - odzyskać lub stabilnie obejść wszystkie praktycznie potrzebne rooty dla dumpra i readera,
  - wygenerować użyteczne offsety/schemy po aktualnym game update,
  - zwrócić live snapshot `GameData` o funkcjonalnym zakresie odpowiadającym windowsowemu kontraktowi wszędzie, gdzie dane istnieją i mają sens na Linuksie,
  - przejść pełny gate walidacyjny bez ukrytych hard-faili.
- Update workflow jest opisany i wsparty toolingiem tak, żeby kolejny patch gry wymagał możliwie mało ręcznej pracy.
- `Plan.md` i `Documentation.md` zostawiają restartowalny, trwały stan bez konieczności czytania czatu.

## Kontrakt jakości i walidacji
- Ownerzy zmiany:
  - owner `root recovery`: interfaces, singletony, patterny, root globals
  - owner `schema/runtime`: schema drift, generated artifacts, field semantics
  - owner `reader parity`: `GameData`, bones, bbox, W2S, targeted state, game phase, map name
  - owner `update tooling`: narzędzia do szukania sygnatur, smoke testy, update workflow
- Source-of-truth lane:
  - `root recovery`: live `probe`, `singleton`, `scan`, `camera`, `snapshot`
  - `schema/runtime`: `./target/debug/cs2-dumper -vv` + sanity check `output/*`
  - `reader parity`: `cargo run -- snapshot` + dedykowane smoke testy
  - `update tooling`: symulowany loop “znajdź root -> zwaliduj semantykę -> zapisz artefakt”
- Tani loop lokalny:
  - `cargo build`
  - celowany `cargo test <smoke> -- --nocapture`
  - celowane `cargo run -- <tool>`
- Gate przed `DONE`:
  - `cargo build`
  - `cargo test interface_fallback_offsets -- --nocapture`
  - `cargo test view_render_camera_smoke -- --nocapture`
  - `cargo test game_data_snapshot_smoke -- --nocapture`
  - pełny zestaw nowych smoke testów readera parity
  - `./target/debug/cs2-dumper -vv`
  - `cargo run -- snapshot`
- Wymagane artefakty:
  - zaktualizowane bundle taska
  - aktualne `output/*`
  - lista rootów odzyskanych przez interface/schema/chain/pattern
  - jawny update playbook po patchu gry
- Niewalidowane ryzyko:
  - część windowsowych feature slice może nie mieć 1:1 odpowiednika jako klasyczny global na Linuksie; wtedy wymagany jest jawny, semantycznie równoważny fallback
