# Floyd-Warshall (All-Pairs Shortest Paths)

Computes shortest paths between every pair of nodes.

### Core Concept

Dynamic programming over intermediate nodes:
$$dist[i][j] = \min(dist[i][j], dist[i][k] + dist[k][j])$$

- **Time Complexity:** $O(N^3)$
- **Space Complexity:** $O(N^2)$

### Pitfalls

- Must guard overflow with INF checks.
- For negative cycle check: if `dist[i][i] < 0` after algorithm, a negative cycle exists through $i$.

[View Full C++ Implementation](../../6_graphs/14_floyd_warshall.cpp)
