# Przywrócenie Linuxowego Dumpra i Readera CS2

## Kryptonim
- Operacja Mokry Kret

## Cel
- Przywrócić branch `linux` w tym repozytorium do stanu działającego na aktualnym CS2 na Linuksie oraz dostarczyć reader danych gry czytający ten sam kontrakt danych, co referencyjny `master-farmer-case/game_data`.

## Rezultaty
- Stabilny attach do procesu `cs2` na Linuksie bez ręcznej ingerencji między etapami.
- Odbudowany zestaw linuxowych sygnatur i ścieżek schema potrzebnych do aktualnego dumpa.
- Działający live dumper generujący aktualne linuxowe `output/*.json`, `output/*.rs`, `output/*.hpp`, `output/*.cs`.
- Reader lub ścieżka snapshotu w tym repozytorium, która zwraca co najmniej:
  - `map_name`
  - `view_matrix`
  - `game_phase`
  - lokalny stan gracza: `score`, `health`, `team_num`, `takes_damage`, `life_state`, `m_h_player_pawn`, `shots_fired`, `eye_angles`, `origin`, `view_origin`, `aim_punch_angle`, `view_angles`, `persona_level`, `xp_trail_level`
  - listę innych graczy z polami: `pawn_address`, `health`, `team_num`, `life_state`, `head_pos`, `bones`, `bbox_2d`, `head_pos_2d`, `is_targeted`
- Udokumentowane komendy run/test/smoke dla dalszych aktualizacji po patchach gry.

## Poza Zakresem
- Przepisywanie `master-farmer-case` albo porządkowanie jego brudnego worktree.
- Pełna zgodność z windowsowymi patternami 1:1.
- Budowa zewnętrznego UI, overlayu albo automatyki inputu.
- Utrzymywanie kompatybilności z historycznymi wersjami CS2.

## Twarde Ograniczenia
- Źródłem prawdy dla live walidacji jest aktualnie uruchomiony natywny linuxowy proces `cs2`, nie `cs2.exe`.
- `master-farmer-case` jest repozytorium referencyjnym do odczytywanych danych i wzorców czytania pamięci; zmiany w nim nie są wymagane do zamknięcia taska.
- Nie wolno kasować ani resetować cudzych zmian w żadnym repozytorium.
- Windowsowy branch i windowsowe generaty mogą służyć jako referencja semantyki offsetów i modelu danych, ale linuxowe patterny i adresacje muszą zostać wyprowadzone dla `lib*.so`.
- Po każdym etapie trzeba wykonać najtańszą sensowną walidację live; nie wolno zamknąć taska na samym `cargo build`.

## Kontrakt Jakości i Walidacji
- Owner: attach i live pipeline
  - Zakres: `src/main.rs`, helpery attachu, test setup, diagnostyka procesu.
  - Source-of-truth lane: `CS2_PID=$(pgrep -x cs2 | head -n1) cargo test build_number -- --nocapture`
- Owner: linux signatures i schema recovery
  - Zakres: `config.json`, `src/analysis/*`, `src/source2/schema_system/*`, `src/output/*`, generaty `output/*`
  - Source-of-truth lane: `CS2_PID=$(pgrep -x cs2 | head -n1) ./target/debug/cs2-dumper -vv`
- Owner: reader kontraktu game_data
  - Zakres: nowa lub rozszerzona ścieżka readera w tym repo, testy/smoke, mapowanie na kontrakt z `master-farmer-case/game_data`
  - Source-of-truth lane: live snapshot zwracający wymagane pola z działającego procesu gry i porównanie semantyczne z kontraktem referencyjnym
- Tani loop lokalny:
  - `cargo build`
  - `CS2_PID=$(pgrep -x cs2 | head -n1) cargo test build_number -- --nocapture`
  - celowane smoke per offset/schema/reader
- Gate przed `DONE`:
  - pełny `cargo build`
  - przejście celowanych testów readera i krytycznych offsetów
  - pełny live run dumpra na aktualnym procesie
  - live reader smoke dla kontraktu danych `GameData`
- Wymagane artefakty:
  - zaktualizowany `config.json`
  - aktualne `output/*.json` i odpowiadające generaty
  - kod readera lub snapshotu
  - komendy run/test w dokumentacji
  - zapis ostatniej walidacji i znanego ryzyka
- Niewalidowane ryzyko:
  - w trakcie taska może zmienić się wersja gry i unieważnić część patternów
  - niektóre pola z `master-farmer-case` mogą wymagać linuxowych odpowiedników przez inną ścieżkę niż na Windows

## Ukończone Gdy
- Dla aktualnej wersji gry branch `linux` potrafi:
  - wejść do procesu `cs2`
  - wyprodukować aktualny dump linuxowych offsetów/schemas bez krytycznego błędu na `SchemaSystem`
  - odczytać kontrakt danych odpowiadający `master-farmer-case/game_data`
- Dokumentacja w `docs/plans/cs2-linux-revival-operacja-mokry-kret/` zawiera aktualny stan, komendy i ostatni wynik live walidacji.

