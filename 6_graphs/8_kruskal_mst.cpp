#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> parent, sz;

    DSU(int n)
    {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return false;
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

struct Edge
{
    int u, v, w;
    bool operator<(const Edge &other) const
    {
        return w < other.w;
    }
};

// O(M log M), O(N)
long long kruskal(int n, vector<Edge> &edges)
{
    sort(edges.begin(), edges.end());
    DSU dsu(n);

    long long mstWeight = 0;
    int used = 0;

    for (const auto &e : edges)
    {
        if (dsu.unite(e.u, e.v))
        {
            mstWeight += e.w;
            used++;
        }
    }

    if (used != n - 1)
        return -1;
    return mstWeight;
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

    cout << kruskal(n, edges) << '\n';
    return 0;
}
