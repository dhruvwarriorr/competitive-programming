
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


struct Node1 {
    long long val; // store more info if required
    Node1() { // Identity Element
        val = 0;
    }
    Node1(long long v) {
        val = v;
    }
    void merge(Node1& l, Node1& r) {
        val = l.val ^ r.val; // may change
    }
};
