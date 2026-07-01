# Kruskal Minimum Spanning Tree

Builds MST by taking edges in increasing weight order while avoiding cycles.

### Core Concept

Sort edges by weight and use DSU to check whether endpoints are already connected.

- **Time Complexity:** $O(M\log M)$
- **Space Complexity:** $O(N)$

### Pitfalls

- If selected edges are fewer than $N-1$, graph is disconnected and MST does not exist.
- Works for negative and positive weights.

[View Full C++ Implementation](../../6_graphs/8_kruskal_mst.cpp)
