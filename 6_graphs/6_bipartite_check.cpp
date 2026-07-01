#include <bits/stdc++.h>
using namespace std;

// O(N + M), O(N)
bool isBipartite(int n, const vector<vector<int>> &adj)
{
    vector<int> color(n + 1, 0);

    for (int start = 1; start <= n; start++)
    {
        if (color[start] != 0)
            continue;

        queue<int> q;
        q.push(start);
        color[start] = 1;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            for (int v : adj[u])
            {
                if (color[v] == 0)
                {
                    color[v] = 3 - color[u];
                    q.push(v);
                }
                else if (color[v] == color[u])
                {
                    return false;
                }
            }
        }
    }
    return true;
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
        adj[v].push_back(u);
    }

    cout << (isBipartite(n, adj) ? "YES" : "NO") << '\n';
    return 0;
}
