#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];

void bfs(int root)  
{  
    queue<int> q;  
    q.push(root);

    vector<bool> vis(N, false);  
    vis[root] = true;

    while(!q.empty())  
    {  
        int node = q.front();  
        q.pop();

        for(auto child : adj[node])  
        {  
            if(vis[child]) continue;  

            vis[child] = true;  
            q.push(child);  
        }  
    }  
}

int main() {

    int nodes, edges;
    if (cin >> nodes >> edges) {
        for (int i = 0; i < edges; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(1);
    }
    }