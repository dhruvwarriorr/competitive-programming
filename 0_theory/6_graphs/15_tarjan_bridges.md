# Tarjan's Bridges

A **bridge** is an edge whose removal disconnects (part of) the graph. Tarjan finds all of them in a single DFS.

### Core Concept
* **When to use:** Critical connections, 2-edge-connected components, "which roads are essential".
* **Time Complexity:** $O(V + E)$.
* **Space Complexity:** $O(V + E)$.

Two arrays drive it:
* `tin[u]`: DFS discovery time of $u$.
* `low[u]`: the smallest `tin` reachable from the subtree of $u$ using tree edges plus **one** back edge.

Tree edge $(u, v)$ is a bridge iff
$$\text{low}[v] > \text{tin}[u]$$
because the subtree of $v$ cannot get back to $u$ or above.

### Core Logic
```cpp
void dfs(int node, int parentEdge) {
    vis[node] = true;
    tin[node] = low[node] = timer++;

    for (auto [child, edgeId] : adj[node]) {
        if (edgeId == parentEdge) continue;   // skip by edge id, handles multi-edges
        if (vis[child]) {
            low[node] = min(low[node], tin[child]);          // back edge
        } else {
            dfs(child, edgeId);
            low[node] = min(low[node], low[child]);          // tree edge
            if (low[child] > tin[node]) bridges.push_back({node, child});
        }
    }
}
```

### Pitfalls
* Skip the parent **edge**, not the parent vertex, or parallel edges are wrongly reported as bridges.
* Run the DFS from every unvisited node if the graph may be disconnected.
* Recursion depth can hit $2 \cdot 10^5$; raise the stack limit or go iterative on judges with small stacks.

[View Full C++ Implementation](../../6_graphs/15_tarjan_bridges.cpp)
