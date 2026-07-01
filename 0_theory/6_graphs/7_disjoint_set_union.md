# Disjoint Set Union (DSU)

Data structure for dynamic connectivity queries.

### Core Concept

Maintain parent pointers for each node's component. Use:

- path compression in `find`
- union by size/rank in `unite`

### Complexity

- **Amortized per operation:** $O(\alpha(N))$ (almost constant)
- **Space:** $O(N)$

### Common Uses

- Connectivity queries
- Kruskal MST
- Offline graph merging problems

[View Full C++ Implementation](../../6_graphs/7_disjoint_set_union.cpp)
