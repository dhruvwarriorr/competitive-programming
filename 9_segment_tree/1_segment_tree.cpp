#include <bits/stdc++.h>
using namespace std;

struct SegTree {
    int n;
    vector<long long> tree;

    SegTree(const vector<long long> &a) {
        n = (int)a.size();
        tree.assign(4 * n, 0);
        build(1, 0, n - 1, a);
    }

    // O(N)
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

    // O(log N)
    void pointSet(int idx, int l, int r, int pos, long long val) {
        if (l == r) {
            tree[idx] = val;
            return;
        }
        int mid = (l + r) / 2;
        if (pos <= mid) pointSet(2 * idx, l, mid, pos, val);
        else pointSet(2 * idx + 1, mid + 1, r, pos, val);
        tree[idx] = tree[2 * idx] + tree[2 * idx + 1];
    }

    // O(log N)
    long long rangeSum(int idx, int l, int r, int ql, int qr) const {
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

    SegTree st(a);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int pos;
            long long val;
            cin >> pos >> val;
            st.pointSet(1, 0, n - 1, pos, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << st.rangeSum(1, 0, n - 1, l, r) << '\n';
        }
    }

    return 0;
}
