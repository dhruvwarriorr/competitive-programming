# Euler Tour Flattening (Subtree to Range)

Maps each subtree into a contiguous segment in a flat array.

### Core Concept

During DFS entry:

- `tin[u]` = entry index of node $u$
- `tout[u]` = last index inside subtree of $u$

Then subtree of $u$ becomes range `[tin[u], tout[u]]`.

- **Time Complexity:** $O(N)$ preprocessing
- **Space Complexity:** $O(N)$

### Why It Matters

Lets you answer subtree sum/min/max queries using segment tree or BIT on the flattened array.

[View Full C++ Implementation](../../7_trees/12_euler_tour_flattening.cpp)
