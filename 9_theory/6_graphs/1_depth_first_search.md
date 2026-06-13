# Depth First Search (DFS)

A depth-first traversal strategy that starts at a root node and explores as far as possible along each branch before backtracking. It is naturally recursive and utilizes the call stack.

### Core Concept
* **When to use:** Detecting cycles, connectivity checks, finding topological sorts, or solving maze/path problems.
* **Time Complexity:** $O(V + E)$ where $V$ is vertices and $E$ is edges.
* **Space Complexity:** $O(V)$ for recursive recursion stack.

### Core Logic
```cpp
void dfs(int node, int parent) {
    for(auto child : adj[node]) {
        if(child == parent) continue;
        dfs(child, node);
    }
}
```

[View Full C++ Implementation](../../6_graphs/1_depth_first_search.cpp)
