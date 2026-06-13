# Count Children

Finds the count of direct children for every node in a rooted tree.

### Core Concept
* **Time Complexity:** $O(N)$ where $N$ is the number of nodes.
* **Space Complexity:** $O(N)$ children array.

### Core Logic
```cpp
void dfs(int node, int parent) {
    for(auto child : adj[node]) {
        if(child == parent) continue;
        children[node]++;
        dfs(child, node);
    }
}
```

[View Full C++ Implementation](../../7_trees/2_number_of_children_for_a_node.cpp)
