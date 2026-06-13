# Precompute Parent Nodes

Precomputes and stores the parent of each node in a rooted tree structure by running a DFS traversal from the root.

### Core Concept
* **Time Complexity:** $O(N)$ where $N$ is the number of nodes.
* **Space Complexity:** $O(N)$ parent array.

### Core Logic
```cpp
void dfs(int node, int parent) {
    parentArr[node] = parent;
    for(auto child : adj[node]) {
        if(child == parent) continue;
        dfs(child, node);
    }
}
```

[View Full C++ Implementation](../../7_trees/1_get_the_parent_of_the_node.cpp)
