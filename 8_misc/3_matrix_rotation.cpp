#include <bits/stdc++.h>
using namespace std;

// Matrix symmetries. For an n x n matrix (0-based):
//   rotate 90 deg clockwise : (i, j) -> (j, n - 1 - i)
//   mirror left <-> right   : (i, j) -> (i, n - 1 - j)
// In place: rotate 90 cw  ==  reverse the rows, then transpose.

// In place, square matrix only  -  O(n^2)
void rotate90(vector<vector<int>> &a) {
    reverse(a.begin(), a.end());
    for (int i = 0; i < (int)a.size(); i++)
        for (int j = i + 1; j < (int)a[i].size(); j++)
            swap(a[i][j], a[j][i]);
}

// Works for any n x m matrix, returns an m x n matrix  -  O(n * m)
vector<vector<int>> rotate90Rect(const vector<vector<int>> &a) {
    int n = a.size(), m = a[0].size();
    vector<vector<int>> res(m, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res[j][n - 1 - i] = a[i][j];
    return res;
}

// Mirror left to right  -  O(n * m)
void mirror(vector<vector<int>> &a) {
    for (auto &row : a) reverse(row.begin(), row.end());
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (auto &row : a)
        for (auto &x : row) cin >> x;

    auto r = rotate90Rect(a);  // 90 degrees clockwise
    for (auto &row : r) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

}
