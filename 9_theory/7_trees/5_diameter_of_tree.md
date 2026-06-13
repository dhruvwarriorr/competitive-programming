# Diameter of Tree

The diameter of a tree is the longest path between any two nodes.

### Core Concept
It can be found using two DFS steps:
1. Run DFS from any arbitrary node (e.g., node 1) to find the farthest node $X$.
2. Run DFS from node $X$ to find the farthest distance, which is the tree diameter.

* **Time Complexity:** $O(N)$ where $N$ is the number of nodes.
* **Space Complexity:** $O(N)$ for recursion call stack.

### Core Logic
```cpp
void dfs(int node, int parent, int dist) {
    if(dist > maxDist) {
        maxDist = dist;
        farthestNode = node;
    }
    for(int child : adj[node]) {
        if(child != parent)
            dfs(child, node, dist + 1);
    }
}

int getDiameter() {
    maxDist = -1;
    dfs(1, -1, 0);

    int start = farthestNode;

    maxDist = -1;
    dfs(start, -1, 0);

    return maxDist;
}
```

[View Full C++ Implementation](../../7_trees/5_diameter_of_tree.cpp)
