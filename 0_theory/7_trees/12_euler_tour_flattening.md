# Euler Tour Flattening (Subtree to Range)

Maps every subtree onto a contiguous segment of a flat array.

### Core Concept

During the DFS each node is written **twice**: once on entry and once on exit.

- `in[u]` = timer value when entering $u$
- `out[u]` = timer value when leaving $u$

The subtree of $u$ is exactly the range `[in[u], out[u]]` of `euler[]`. Every node in that subtree appears twice inside it, so a range **sum** must be divided by $2$.

- **Time Complexity:** $O(N)$ preprocessing
- **Space Complexity:** $O(N)$ (the array has $2N$ slots)

### Core Logic

```cpp
void dfs(int node, int parent) {
    in[node] = timer++;
    for (int child : adj[node]) {
        if (child == parent) continue;
        dfs(child, node);
    }
    out[node] = timer++;
}

// after dfs:  euler[in[u]] = euler[out[u]] = val[u]
// subtree sum of u = (sum of euler[in[u] .. out[u]]) / 2
```

If you only stamp on entry (`tin`, and `tout` = last `tin` inside the subtree), the array has $N$ slots and the range sum needs no division. That variant is the standard input for a segment tree.

### Why It Matters

It turns subtree queries into range queries, so a [segment tree](../9_segment_tree/1_segment_tree.md) or [Fenwick tree](../9_segment_tree/3_fenwick_tree.md) can answer subtree sum/min/max and support point updates.

### Pitfalls
* The array must be `2 * N` long when writing both entry and exit.
* Recompute `timer = 0` before each DFS when testing multiple cases.

[View Full C++ Implementation](../../7_trees/12_euler_tour_flattening.cpp)
