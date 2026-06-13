# Breadth First Search (BFS)

A level-order traversal strategy that explores all neighbor nodes at the present depth level before moving on to the nodes at the next depth level. It utilizes a FIFO queue.

### Core Concept
* **When to use:** Finding the shortest path in unweighted graphs or level-order node processing.
* **Time Complexity:** $O(V + E)$.
* **Space Complexity:** $O(V)$ auxiliary queue and visited array.

### Core Logic
```cpp
queue <int> q;
q.push(root);
vector <bool> vis(N, false);
vis[root] = true;
while(!q.empty()) {
    int node = q.front(); q.pop();
    for(auto child : adj[node]) {
        if(vis[child]) continue;
        vis[child] = true;
        q.push(child);
    }
}
```

[View Full C++ Implementation](../../6_graphs/2_breadth_first_search.cpp)
