#include <bits/stdc++.h>
using namespace std;

void dfs1(int u, const vector<vector<int>> &adj, vector<int> &vis, vector<int> &order)
{
    vis[u] = 1;
    for (int v : adj[u])
    {
        if (!vis[v])
            dfs1(v, adj, vis, order);
    }
    order.push_back(u);
}

void dfs2(int u, const vector<vector<int>> &rev, vector<int> &vis, vector<int> &comp)
{
    vis[u] = 1;
    comp.push_back(u);
    for (int v : rev[u])
    {
        if (!vis[v])
            dfs2(v, rev, vis, comp);
    }
}

// O(N + M), O(N + M)
vector<vector<int>> kosaraju(int n, const vector<vector<int>> &adj)
{
    vector<vector<int>> rev(n + 1);
    for (int u = 1; u <= n; u++)
    {
        for (int v : adj[u])
            rev[v].push_back(u);
    }

    vector<int> vis(n + 1, 0), order;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs1(i, adj, vis, order);
    }

    fill(vis.begin(), vis.end(), 0);
    reverse(order.begin(), order.end());

    vector<vector<int>> scc;
    for (int u : order)
    {
        if (vis[u])
            continue;
        scc.push_back({});
        dfs2(u, rev, vis, scc.back());
    }

    return scc;
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

    auto scc = kosaraju(n, adj);
    cout << scc.size() << '\n';
    for (auto &comp : scc)
    {
        for (int i = 0; i < (int)comp.size(); i++)
        {
            cout << comp[i] << " \n"[i + 1 == (int)comp.size()];
        }
    }

    return 0;
}
