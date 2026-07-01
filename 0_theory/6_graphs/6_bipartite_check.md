# Bipartite Check

Checks whether a graph can be colored with 2 colors so that no edge connects same-colored nodes.

### Core Concept

Run BFS/DFS on each component and assign alternating colors. Conflict means graph is not bipartite.

- **When to use:** Partitioning constraints, odd-cycle detection.
- **Time Complexity:** $O(N + M)$
- **Space Complexity:** $O(N)$

### Key Fact

A graph is bipartite iff it contains no odd-length cycle.

[View Full C++ Implementation](../../6_graphs/6_bipartite_check.cpp)
