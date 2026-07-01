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

    // Amortized almost O(1)
    int find(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    // Amortized almost O(1)
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    DSU dsu(n);

    while (q--)
    {
        int type, u, v;
        cin >> type >> u >> v;
        if (type == 1)
        {
            dsu.unite(u, v);
        }
        else
        {
            cout << (dsu.find(u) == dsu.find(v) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
