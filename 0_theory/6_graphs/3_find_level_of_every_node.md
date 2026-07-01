# Find Level of Every Node (Graph/Tree)

Computes minimum edge distance from a source node to all reachable nodes.

### Core Concept

Use BFS and set `level[child] = level[parent] + 1` when first discovered.

- **Time Complexity:** $O(N + M)$
- **Space Complexity:** $O(N)$

[View Full C++ Implementation](../../6_graphs/3_find_level_of_every_node.cpp)
