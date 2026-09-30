// Sparse Table - O(N log N) build; O(1) for idempotent queries (min/max/gcd), O(log N) for others
// Supports many different tables with just a change in Node.
// Very few changes required each time.

#include <bits/stdc++.h>
using namespace std;

template<typename Node>
struct SparseTable {
    vector<vector<Node>> table;
    int n;
    int maxLog;
    vector<long long> logVal;

    SparseTable(int n, vector<long long>& a) { // change if type updated
        this->n = n;
        logVal.assign(n + 1, 0);
        maxLog = n > 1 ? (int)log2(n) : 0;
        for (int i = 2; i <= n; i++) logVal[i] = logVal[i / 2] + 1;
        table.assign(n, vector<Node>(maxLog + 1, Node()));
        for (int i = 0; i < n; i++) table[i][0] = Node(a[i]);
        for (int j = 1; j <= maxLog; j++)
            for (int i = 0; i + (1 << j) <= n; i++)
                table[i][j].merge(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
    }

   
    Node queryNormal(int l, int r) { // Never change this
        Node ans;
        for (int j = logVal[r - l + 1]; j >= 0; j--) {
            if ((1 << j) <= r - l + 1) {
                ans.merge(ans, table[l][j]);
                l += (1 << j);
            }
        }
        return ans;
    }

 
    Node queryIdempotent(int l, int r) { // Never change this
        int j = logVal[r - l + 1];
        Node ans;
        ans.merge(table[l][j], table[r - (1 << j) + 1][j]);
        return ans;
    }
};


// Example 1: min aggregate (idempotent -> use queryIdempotent, O(1))
struct NodeMin {
    long long val;
    NodeMin() { val = LLONG_MAX; } // Identity element
    NodeMin(long long v) { val = v; }
    void merge(NodeMin& l, NodeMin& r) { val = min(l.val, r.val); }
};

// Example 2: XOR aggregate (non-idempotent -> use queryNormal, O(log N))
struct NodeXor {
    long long val; // store more info if required
    NodeXor() { val = 0; } // Identity element
    NodeXor(long long v) { val = v; }
    void merge(NodeXor& l, NodeXor& r) { val = l.val ^ r.val; }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    SparseTable<NodeMin> mn(n, a);
    SparseTable<NodeXor> xr(n, a);

    while (q--) {
        int l, r;
        cin >> l >> r; // 0-based, inclusive
        cout << mn.queryIdempotent(l, r).val << " " << xr.queryNormal(l, r).val << "\n";
    }
}
