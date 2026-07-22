template<typename Node, typename Update>
struct LazySGT {
    vector<Node> tree;
    vector<bool> lazy;
    vector<Update> updates;
    int n;
    int s;

    LazySGT(int n, vector<long long>& a) { // change if type updated
        this->n = n;
        s = 1;
        while (s < 2 * n) s <<= 1;
        tree.resize(s, Node());
        lazy.resize(s, false);
        updates.resize(s, Update());
        _build(a, 0, n - 1, 1);
    }

    void _build(vector<long long>& a, int l, int r, int idx) { // Never change this
        if (l == r) { tree[idx] = Node(a[l]); return; }
        int m = (l + r) / 2;
        _build(a, l, m, 2 * idx);
        _build(a, m + 1, r, 2 * idx + 1);
        tree[idx].merge(tree[2 * idx], tree[2 * idx + 1]);
    }

    void _apply(int idx, int l, int r, Update& u) { // Never change this
        if (l != r) {
            lazy[idx] = true;
            updates[idx].combine(u, l, r);
        }
        u.apply(tree[idx], l, r);
    }

    void _pushdown(int idx, int l, int r) { // Never change this
        if (lazy[idx]) {
            int m = (l + r) / 2;
            _apply(2 * idx, l, m, updates[idx]);
            _apply(2 * idx + 1, m + 1, r, updates[idx]);
            updates[idx] = Update();
            lazy[idx] = false;
        }
    }

    void _update(int l, int r, int idx, int ql, int qr, Update& u) { // Never change this
        if (l > qr || r < ql) return;
        if (l >= ql && r <= qr) { _apply(idx, l, r, u); return; }
        _pushdown(idx, l, r);
        int m = (l + r) / 2;
        _update(l, m, 2 * idx, ql, qr, u);
        _update(m + 1, r, 2 * idx + 1, ql, qr, u);
        tree[idx].merge(tree[2 * idx], tree[2 * idx + 1]);
    }

    Node _query(int l, int r, int idx, int ql, int qr) { // Never change this
        if (l > qr || r < ql) return Node();
        if (l >= ql && r <= qr) { _pushdown(idx, l, r); return tree[idx]; }
        _pushdown(idx, l, r);
        int m = (l + r) / 2;
        Node left = _query(l, m, 2 * idx, ql, qr);
        Node right = _query(m + 1, r, 2 * idx + 1, ql, qr);
        Node ans;
        ans.merge(left, right);
        return ans;
    }

    void make_update(int l, int r, long long val) { // pass in as many parameters as required
        Update u(val); // may change
        _update(0, n - 1, 1, l, r, u);
    }

    Node make_query(int l, int r) {
        return _query(0, n - 1, 1, l, r);
    }
};


struct Node1 {
    long long val; // may change
    Node1() { // Identity element
        val = 0; // may change
    }
    Node1(long long v) { // Actual Node
        val = v; // may change
    }
    void merge(Node1& l, Node1& r) { // Merge two child nodes
        val = l.val + r.val; // may change
    }
};
struct Update1 {
    long long val; // may change
    Update1() { // Identity update
        val = 0; // may change
    }
    Update1(long long v) { // Actual Update
        val = v; // may change
    }
    void apply(Node1& a, int l, int r) { // apply update to given node
        a.val = val * (r - l + 1); // may change
    }
    void combine(Update1& newer, int l, int r) { // combine with incoming update
        val = newer.val; // may change
    }
};
