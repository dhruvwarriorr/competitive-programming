# Kosaraju (Strongly Connected Components)

Finds SCCs of a directed graph in two DFS passes.

### Core Concept

1. DFS on original graph to get finishing order.
2. Reverse graph.
3. DFS in reverse finishing order on reversed graph.

Each DFS tree in pass-2 is one SCC.

- **Time Complexity:** $O(N + M)$
- **Space Complexity:** $O(N + M)$

[View Full C++ Implementation](../../6_graphs/12_kosaraju_scc.cpp)
