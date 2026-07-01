# Dijkstra (Single Source Shortest Path)

Finds shortest distances from a source node in a weighted graph with non-negative edge weights.

### Core Concept

Use a min-priority queue to always expand the node with currently smallest known distance.

- **When to use:** Weighted graph, all weights $\ge 0$.
- **Time Complexity:** $O((N + M)\log N)$
- **Space Complexity:** $O(N + M)$

### Pitfalls

- Do not use with negative weights.
- Skip stale heap entries using `if (d != dist[u]) continue;`.
- Use `long long` for distances when weights are large.

[View Full C++ Implementation](../../6_graphs/5_dijkstra.cpp)
