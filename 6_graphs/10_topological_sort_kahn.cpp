#include <bits/stdc++.h>
using namespace std;

// O(N + M), O(N)
vector<int> topoSortKahn(int n, const vector<vector<int>> &adj)
{
    vector<int> indeg(n + 1, 0);
    for (int u = 1; u <= n; u++)
    {
        for (int v : adj[u])
            indeg[v]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    vector<int> topo;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        topo.push_back(u);

        for (int v : adj[u])
        {
            if (--indeg[v] == 0)
                q.push(v);
        }
    }

    return topo;
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

    vector<int> topo = topoSortKahn(n, adj);
    if ((int)topo.size() != n)
    {
        cout << "Graph has a cycle\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << topo[i] << " \n"[i == n - 1];
        }
    }

    return 0;
}
