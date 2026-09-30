#include <bits/stdc++.h>
using namespace std;

// Tarjan's Bridge-Finding Algorithm  -  O(V + E)
// An edge (u, v) is a bridge iff low[v] > tin[u]:
// the subtree of v cannot climb back to u or above without using that edge.
// Skipping the parent by EDGE ID (not by vertex) keeps parallel edges correct.

const int N = 2e5 + 5;

vector<pair<int, int>> adj[N];  // (neighbour, edgeId)
int tin[N], low[N];
bool vis[N];
int timer = 0;

vector<pair<int, int>> bridges;

void dfs(int node, int parentEdge) {
    vis[node] = true;
    tin[node] = low[node] = timer++;  // discovery time

    for (auto [child, edgeId] : adj[node]) {
        if (edgeId == parentEdge) continue;

        if (vis[child]) {
            // back edge
            low[node] = min(low[node], tin[child]);
        } else {
            // tree edge
            dfs(child, edgeId);
            low[node] = min(low[node], low[child]);

            // bridge condition
            if (low[child] > tin[node]) {
                bridges.push_back({node, child});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) dfs(i, -1);
    }

    cout << bridges.size() << "\n";
    for (auto [u, v] : bridges) cout << u << " " << v << "\n";
}
