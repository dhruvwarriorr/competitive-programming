# Find Level of Nodes

Assigns a depth/level to every node relative to a root node (level 0) using a simple tree-based DFS traversal.

### Core Concept
* **Time Complexity:** $O(V + E)$.
* **Space Complexity:** $O(V)$ recursion stack.

### Core Logic
```cpp
void dfs(int node, int parent) {
    if(parent == -1) level[node] = 0;
    else level[node] = level[parent] + 1;

    for(auto child : adj[node]) {
        if(child == parent) continue;
        dfs(child, node);
    }
}
```

[View Full C++ Implementation](../../7_trees/9_find_level_of_every_node.cpp)
