# Farthest Leaf Node Inside Subtree

Finds the maximum distance (height) from a node to any leaf inside its subtree.

### Core Concept
* **Time Complexity:** $O(N)$ where $N$ is the number of nodes.
* **Space Complexity:** $O(N)$ farthest array.

### Mathematical Formulation
$$\text{height}[u] = 1 + \max_{v \in \text{children}(u)} \text{height}[v]$$

### Core Logic
```cpp
void dfs(int node, int parent) {
    farthest[node] = 0;
    for(auto child : adj[node]) {
        if(child == parent) continue;
        dfs(child, node);
        farthest[node] = max(farthest[node], farthest[child] + 1);
    }
}
```

[View Full C++ Implementation](../../7_trees/4_farthest_leaf_node_inside_subtree.cpp)
