#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = (ll)4e18;

struct Edge
{
    int u, v;
    ll w;
};

// O(N * M), O(N)
pair<vector<ll>, bool> bellmanFord(int n, int src, const vector<Edge> &edges)
{
    vector<ll> dist(n + 1, INF);
    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        bool changed = false;
        for (const auto &e : edges)
        {
            if (dist[e.u] == INF)
                continue;
            if (dist[e.u] + e.w < dist[e.v])
            {
                dist[e.v] = dist[e.u] + e.w;
                changed = true;
            }
        }
        if (!changed)
            break;
    }

    bool hasNegativeCycle = false;
    for (const auto &e : edges)
    {
        if (dist[e.u] == INF)
            continue;
        if (dist[e.u] + e.w < dist[e.v])
        {
            hasNegativeCycle = true;
            break;
        }
    }

    return {dist, hasNegativeCycle};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<Edge> edges(m);
    for (int i = 0; i < m; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int src;
    cin >> src;

    auto [dist, hasNegativeCycle] = bellmanFord(n, src, edges);
    if (hasNegativeCycle)
    {
        cout << "Negative cycle detected\n";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << (dist[i] == INF ? -1 : dist[i]) << " \n"[i == n];
    }

    return 0;
}
