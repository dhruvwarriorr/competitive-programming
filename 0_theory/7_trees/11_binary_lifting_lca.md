# Binary Lifting + LCA

Answers Lowest Common Ancestor queries in $O(\log N)$ after preprocessing.

### Core Concept

Precompute `up[u][j]` = $2^j$-th ancestor of node $u$. To answer LCA:

1. Lift deeper node to same depth.
2. Lift both nodes from high bit to low bit until parents diverge.

- **Preprocessing:** $O(N\log N)$
- **Per Query:** $O(\log N)$
- **Space:** $O(N\log N)$

### Bonus

Also useful for $k$-th ancestor queries directly.

[View Full C++ Implementation](../../7_trees/11_binary_lifting_lca.cpp)
