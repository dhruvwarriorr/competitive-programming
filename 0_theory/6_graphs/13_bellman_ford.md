# Bellman-Ford

Single-source shortest paths that also supports negative edge weights.

### Core Concept

Relax all edges $N-1$ times. A further successful relaxation indicates a reachable negative cycle.

- **Time Complexity:** $O(NM)$
- **Space Complexity:** $O(N)$

### When to Prefer

- Graph has negative edges.
- Need negative cycle detection.

[View Full C++ Implementation](../../6_graphs/13_bellman_ford.cpp)
