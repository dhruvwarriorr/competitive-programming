#include <bits/stdc++.h>
using namespace std;

// Fenwick Tree (Binary Indexed Tree)  -  1-based
// Point update + prefix/range sum, both O(log N), O(N) memory, tiny constant.
// i & -i is the lowest set bit: it is the size of the block that tree[i] covers.

struct Fenwick {
    int n;
    vector<long long> tree;

    Fenwick(int n) : n(n), tree(n + 1, 0) {}

    // a[i] += delta
    void add(int i, long long delta) {
        for (; i <= n; i += i & -i) tree[i] += delta;
    }

    // sum of a[1..i]
    long long prefix(int i) const {
        long long s = 0;
        for (; i > 0; i -= i & -i) s += tree[i];
        return s;
    }

    // sum of a[l..r]
    long long range(int l, int r) const { return prefix(r) - prefix(l - 1); }

    // smallest i with prefix(i) >= target (values must be non-negative), n + 1 if none
    int lowerBound(long long target) const {
        int pos = 0;
        for (int pw = 1 << (31 - __builtin_clz(max(n, 1))); pw; pw >>= 1) {
            if (pos + pw <= n && tree[pos + pw] < target) {
                pos += pw;
                target -= tree[pos];
            }
        }
        return pos + 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    Fenwick fw(n);
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        fw.add(i, x);
    }

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {  // 1 i delta -> a[i] += delta
            int i;
            long long d;
            cin >> i >> d;
            fw.add(i, d);
        } else {  // 2 l r -> sum of a[l..r]
            int l, r;
            cin >> l >> r;
            cout << fw.range(l, r) << "\n";
        }
    }
}
