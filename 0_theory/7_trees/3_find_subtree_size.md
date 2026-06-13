# Find Subtree Size

Computes the total number of nodes in the subtree of each node (including the node itself). This is done recursively by summing the subtree sizes of all its children.

### Core Concept
* **Time Complexity:** $O(N)$ where $N$ is the number of nodes.
* **Space Complexity:** $O(N)$ subtree size array.

### Mathematical Formulation
$$\text{subtree}[u] = 1 + \sum_{v \in \text{children}(u)} \text{subtree}[v]$$

### Core Logic
```cpp
void dfs(int node, int parent) {
    subtree[node] = 1;
    for(auto child : adj[node]) {
        if(child == parent) continue;
        dfs(child, node);
        subtree[node] += subtree[child];
    }
}
```

[View Full C++ Implementation](../../7_trees/3_find_subtree_size.cpp)
