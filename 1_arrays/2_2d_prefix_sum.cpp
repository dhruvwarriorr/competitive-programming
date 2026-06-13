#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> buildPrefix(vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();
    vector<vector<int>> pre(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pre[i][j] = a[i][j];
            if (i > 0) pre[i][j] += pre[i - 1][j];
            if (j > 0) pre[i][j] += pre[i][j - 1];
            if (i > 0 && j > 0) pre[i][j] -= pre[i - 1][j - 1];
        }
    }
    return pre;
}

int query(int l1, int r1, int l2, int r2, vector<vector<int>>& pre){
    int res = pre[l2][r2];
    if (l1 > 0) res -= pre[l1 - 1][r2];
    if (r1 > 0) res -= pre[l2][r1 - 1];
    if (l1 > 0 && r1 > 0) res += pre[l1 - 1][r1 - 1];
    return res;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> pre = buildPrefix(a);

    int q;
    cin >> q;

    while (q--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        cout << query(l1, r1, l2, r2, pre) << "\n";
    }

}
