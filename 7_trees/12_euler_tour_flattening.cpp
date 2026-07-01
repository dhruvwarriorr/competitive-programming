#include <bits/stdc++.h>
using namespace std;

const int N = 200000 + 5;
vector<int> adj[N];
int tin[N], tout[N], flat[N];
int timerVal = 0;

// O(N), O(N)
void eulerTour(int node, int parent)
{
    tin[node] = timerVal;
    flat[timerVal] = node;
    timerVal++;

    for (int child : adj[node])
    {
        if (child == parent)
            continue;
        eulerTour(child, node);
    }

    tout[node] = timerVal - 1;
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

    eulerTour(1, 0);

    for (int u = 1; u <= n; u++)
    {
        cout << u << ": [" << tin[u] << ", " << tout[u] << "]\n";
    }

    return 0;
}
