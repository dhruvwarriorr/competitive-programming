#include <bits/stdc++.h>
using namespace std;

// Euler Tour Flattening - O(N)
// Every node is written twice (on entry and on exit), so the subtree of u
// is the contiguous range [in[u], out[u]] of euler[] and holds each subtree
// value exactly twice -> a range sum over it must be divided by 2.
// Build a Segment Tree / Fenwick Tree on euler[] for subtree updates/queries.

const int N = 2e5 + 5;

vector<int> adj[N];
long long val[N];    // value of node
int in[N], out[N];
long long euler[2 * N];
int timer = 0;

void dfs(int node, int parent) {
    in[node] = timer++;

    for (int child : adj[node]) {
        if (child == parent) continue;
        dfs(child, node);
    }

    out[node] = timer++;
}

void buildEulerTour(int n, int root) {
    timer = 0;
    dfs(root, -1);

    for (int node = 1; node <= n; node++) {
        euler[in[node]] = euler[out[node]] = val[node];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, root, q;
    cin >> n >> root;
    for (int i = 1; i <= n; i++) cin >> val[i];
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    buildEulerTour(n, root);

    // prefix sums over the flattened array
    vector<long long> pre(2 * n + 1, 0);
    for (int i = 0; i < 2 * n; i++) pre[i + 1] = pre[i] + euler[i];

    cin >> q;
    while (q--) {
        int u;
        cin >> u; // print the sum of the subtree of u
        cout << (pre[out[u] + 1] - pre[in[u]]) / 2 << "\n";
    }
}
