#include <bits/stdc++.h>
using namespace std;

const int N = 200000 + 5;
const int LOG = 20;

vector<int> adj[N];
int up[N][LOG];
int depthArr[N];

void dfs(int u, int p)
{
    up[u][0] = p;
    for (int j = 1; j < LOG; j++)
    {
        up[u][j] = up[up[u][j - 1]][j - 1];
    }

    for (int v : adj[u])
    {
        if (v == p)
            continue;
        depthArr[v] = depthArr[u] + 1;
        dfs(v, u);
    }
}

int lift(int u, int k)
{
    for (int j = 0; j < LOG; j++)
    {
        if (k & (1 << j))
            u = up[u][j];
    }
    return u;
}

// O(log N) per query
int lca(int a, int b)
{
    if (depthArr[a] < depthArr[b])
        swap(a, b);
    a = lift(a, depthArr[a] - depthArr[b]);
    if (a == b)
        return a;

    for (int j = LOG - 1; j >= 0; j--)
    {
        if (up[a][j] != up[b][j])
        {
            a = up[a][j];
            b = up[b][j];
        }
    }
    return up[a][0];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    depthArr[1] = 0;
    dfs(1, 0);

    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        cout << lca(u, v) << '\n';
    }

    return 0;
}
