# docs/plans

Ten katalog przechowuje artefakty długich, wieloetapowych zadań dla Codexa i innych agentów programistycznych.

Domyślny wzorzec dla każdego zadania:

```text
<task-slug>/
  Prompt.md
  Plan.md
  Implement.md
  Documentation.md
```

`Plan.md` jest żywym źródłem prawdy dla wykonania. Trzymaj etapy, postęp, decyzje i walidację w jednym miejscu.
`Documentation.md` traktuj jako pomocniczą pamięć operacyjną, nie jako główny plan.
Po przejściu etapu od razu przechodź do następnego nieukończonego etapu, chyba że zadanie jest globalnie ukończone albo zablokowane.
