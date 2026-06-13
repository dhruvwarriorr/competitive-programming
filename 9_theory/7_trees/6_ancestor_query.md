# Ancestor Query

Checks if node $X$ is an ancestor of node $Y$ in $O(1)$ time by comparing precomputed Euler Tour discovery/finish times (`inTime` and `outTime`).

### Core Concept
During DFS traversal, we track the entry time (`inTime`) and exit time (`outTime`) of each node. A node $X$ is an ancestor of node $Y$ if and only if the interval $[inTime[Y], outTime[Y]]$ is completely nested within the interval $[inTime[X], outTime[X]]$.

* **Time Complexity:** $O(1)$ query time.
* **Space Complexity:** $O(1)$ query space (requires $O(N)$ space to store times).

### Core Logic
```cpp
bool isAncestor(int x, int y) {  
    return inTime[x] <= inTime[y] && outTime[y] <= outTime[x];  
}
```

[View Full C++ Implementation](../../7_trees/6_ancestor_query.cpp)
