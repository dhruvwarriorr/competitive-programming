#include <bits/stdc++.h>
using namespace std;

void dfs(int u, const vector<vector<int>> &adj, vector<int> &vis, vector<int> &order)
{
    vis[u] = 1;
    for (int v : adj[u])
    {
        if (!vis[v])
            dfs(v, adj, vis, order);
    }
    order.push_back(u);
}

// O(N + M), O(N)
vector<int> topoSortDfs(int n, const vector<vector<int>> &adj)
{
    vector<int> vis(n + 1, 0), order;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs(i, adj, vis, order);
    }
    reverse(order.begin(), order.end());
    return order;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> topo = topoSortDfs(n, adj);
    for (int i = 0; i < n; i++)
    {
        cout << topo[i] << " \n"[i == n - 1];
    }

    return 0;
}
