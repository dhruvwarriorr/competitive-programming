#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector <int> adj[N];
int level[N];

void dfs(int node, int parent)
{
    if(parent == -1)
        level[node] = 0;
    else
        level[node] = level[parent] + 1;

    for(auto child : adj[node])
    {
        if(child == parent) continue;
        dfs(child, node);
    }
}

int main() {

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1);

}
