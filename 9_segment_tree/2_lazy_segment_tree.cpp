#include <bits/stdc++.h>
using namespace std;

struct LazySegTree {
    int n;
    vector<long long> tree, lazy;

    LazySegTree(const vector<long long> &a) {
        n = (int)a.size();
        tree.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
        build(1, 0, n - 1, a);
    }

    void build(int idx, int l, int r, const vector<long long> &a) {
        if (l == r) {
            tree[idx] = a[l];
            return;
        }
        int mid = (l + r) / 2;
        build(2 * idx, l, mid, a);
        build(2 * idx + 1, mid + 1, r, a);
        tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
    }

    void push(int idx, int l, int r) {
        if (lazy[idx] == 0) return;
        tree[idx] += lazy[idx] * (r - l + 1);
        if (l != r) {
            lazy[2 * idx] += lazy[idx];
            lazy[2 * idx + 1] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    // O(log N)
    void rangeAdd(int idx, int l, int r, int ql, int qr, long long val) {
        push(idx, l, r);
        if (r < ql || qr < l) return;
        if (ql <= l && r <= qr) {
            lazy[idx] += val;
            push(idx, l, r);
            return;
        }
        int mid = (l + r) / 2;
        rangeAdd(2 * idx, l, mid, ql, qr, val);
        rangeAdd(2 * idx + 1, mid + 1, r, ql, qr, val);
        tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
    }

    // O(log N)
    long long rangeSum(int idx, int l, int r, int ql, int qr) {
        push(idx, l, r);
        if (r < ql || qr < l) return 0;
        if (ql <= l && r <= qr) return tree[idx];
        int mid = (l + r) / 2;
        return rangeSum(2 * idx, l, mid, ql, qr) +
               rangeSum(2 * idx + 1, mid + 1, r, ql, qr);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    LazySegTree st(a);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            long long val;
            cin >> l >> r >> val;
            st.rangeAdd(1, 0, n - 1, l, r, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << st.rangeSum(1, 0, n - 1, l, r) << '\n';
        }
    }

    return 0;
}
