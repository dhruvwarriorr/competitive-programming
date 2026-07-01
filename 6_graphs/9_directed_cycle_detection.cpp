#include <bits/stdc++.h>
using namespace std;

bool dfsCycle(int u, const vector<vector<int>> &adj, vector<int> &vis, vector<int> &inStack)
{
    vis[u] = 1;
    inStack[u] = 1;

    for (int v : adj[u])
    {
        if (!vis[v])
        {
            if (dfsCycle(v, adj, vis, inStack))
                return true;
        }
        else if (inStack[v])
        {
            return true;
        }
    }

    inStack[u] = 0;
    return false;
}

// O(N + M), O(N)
bool hasCycleDirected(int n, const vector<vector<int>> &adj)
{
    vector<int> vis(n + 1, 0), inStack(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && dfsCycle(i, adj, vis, inStack))
            return true;
    }
    return false;
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

    cout << (hasCycleDirected(n, adj) ? "YES" : "NO") << '\n';
    return 0;
}
