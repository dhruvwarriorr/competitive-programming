# Topological Sort (DFS)

Topological ordering using DFS finishing times.

### Core Concept

Run DFS and push node to order after all neighbors are processed. Reverse the order at the end.

- **Time Complexity:** $O(N + M)$
- **Space Complexity:** $O(N)$

### Note

Use this only on DAGs. For cycle-safe workflow, run directed cycle detection first.

[View Full C++ Implementation](../../6_graphs/11_topological_sort_dfs.cpp)
