#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
int subtree[N];

void dfs(int node, int parent)
{
    subtree[node] = 1;

    for(auto child : adj[node])
    {
        if(child == parent) continue;
        dfs(child, node);
        subtree[node] += subtree[child];
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
