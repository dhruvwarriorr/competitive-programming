# Topological Sort (Kahn's Algorithm)

Produces a valid ordering of nodes in a DAG using indegrees and BFS.

### Core Concept

Push all nodes with indegree 0 into queue, pop one-by-one, and reduce indegrees of outgoing neighbors.

- **Time Complexity:** $O(N + M)$
- **Space Complexity:** $O(N)$

### Cycle Check

If output size is not $N$, the graph contains a directed cycle.

[View Full C++ Implementation](../../6_graphs/10_topological_sort_kahn.cpp)
