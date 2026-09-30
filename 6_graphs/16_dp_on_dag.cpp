#include <bits/stdc++.h>
using namespace std;

// DP on a DAG  -  O(V + E)
// 1. Topologically sort the graph (Kahn).
// 2. Walk the order in REVERSE so every child is finished before its parent.
// Here: dp[u] = longest path (by total weight) starting at u.
// Other transitions: min/max path, number of paths (dp[u] += dp[v]), reachability.

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>> adj(n + 1);
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        indeg[v]++;
    }

    // Kahn's topological order
    vector<int> topo;
    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (indeg[i] == 0) q.push(i);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topo.push_back(u);
        for (auto [v, w] : adj[u])
            if (--indeg[v] == 0) q.push(v);
    }

    if ((int)topo.size() != n) {
        cout << "Not a DAG\n";
        return 0;
    }

    vector<ll> dp(n + 1, 0);  // initialise dp[u] (0 = path of a single node)

    for (int i = n - 1; i >= 0; i--) {
        int u = topo[i];
        for (auto [v, w] : adj[u]) {
            dp[u] = max(dp[u], dp[v] + w);  // transition
        }
    }

    cout << *max_element(dp.begin() + 1, dp.end()) << "\n";  // longest path overall
}
