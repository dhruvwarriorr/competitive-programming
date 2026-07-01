# Directed Cycle Detection (DFS + Recursion Stack)

Detects cycle in directed graph using DFS state + recursion stack marker.

### Core Concept

While DFS is active for a node, mark it `inStack = true`. If we see an edge to another `inStack` node, a back-edge exists and cycle is present.

- **Time Complexity:** $O(N + M)$
- **Space Complexity:** $O(N)$

### Pitfalls

- In undirected graphs, this method is not used directly.
- For very deep graphs, recursion depth can overflow.

[View Full C++ Implementation](../../6_graphs/9_directed_cycle_detection.cpp)
