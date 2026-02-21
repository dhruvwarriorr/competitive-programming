#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            cin >> a[i][j];
        }
    }

    vector<vector<int>> pre(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            pre[i][j] = a[i][j];

            if (i > 0) {
                pre[i][j] += pre[i - 1][j];
            }

            if (j > 0) {
                pre[i][j] += pre[i][j - 1];
            }

            if (i > 0 && j > 0) {
                pre[i][j] -= pre[i - 1][j - 1];
            }
        }
    }

 
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int ans = pre[x2][y2];

    if (x1 > 0) {
        ans -= pre[x1 - 1][y2];
    }

    if (y1 > 0) {
        ans -= pre[x2][y1 - 1];
    }

    if (x1 > 0 && y1 > 0) {
        ans += pre[x1 - 1][y1 - 1];
    }

    cout << ans << "\n";
}