# DP on a DAG

Any DP whose states are graph nodes and whose transitions follow edges can be evaluated in topological order.

### Core Concept
* **When to use:** Longest/shortest path in a DAG, counting paths, reachability, "max score over a dependency graph".
* **Time Complexity:** $O(V + E)$.
* **Space Complexity:** $O(V + E)$.

Compute a topological order ([Kahn](10_topological_sort_kahn.md) or [DFS](11_topological_sort_dfs.md)), then process nodes in **reverse** order so all children are finished first. If the sort returns fewer than $V$ nodes the graph has a cycle and this DP is invalid.

### Core Logic
```cpp
for (int i = (int)topo.size() - 1; i >= 0; i--) {
    int u = topo[i];
    // initialize dp[u]
    for (auto [v, w] : adj[u]) {
        dp[u] = max(dp[u], dp[v] + w);   // transition
    }
}
```

Variants: number of paths `dp[u] += dp[v]` (with `dp[sink] = 1`), shortest path `min`, and so on.

[View Full C++ Implementation](../../6_graphs/16_dp_on_dag.cpp)
