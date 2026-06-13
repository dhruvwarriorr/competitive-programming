# DFS Entry / Exit Timers (Euler Tour)

Computes entry (`inTime`) and exit (`outTime`) timestamps for each node during a DFS traversal. The timers allow us to verify if a node $U$ is an ancestor of a node $V$ in $O(1)$ time.

### Core Concept
* **When to use:** Answering ancestor queries, flattening tree structures to range query problems, and finding tree intersections.
* **Time Complexity:** $O(V + E)$ precomputation, $O(1)$ query.
* **Space Complexity:** $O(V)$ to store timers.

### Core Logic
Node $U$ is an ancestor of $V$ if and only if:
$$\text{inTime}[U] \le \text{inTime}[V] \quad \text{and} \quad \text{outTime}[V] \le \text{outTime}[U]$$

```cpp
void dfs(int node, int parent) {
    inTime[node] = timer++;
    for(auto child : adj[node]) {
        if(child == parent) continue;
        dfs(child, node);
    }
    outTime[node] = timer++;
}
```

[View Full C++ Implementation](../../7_trees/10_in_time_out_time.cpp)
