#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    if (cin >> n >> q) {
        vector<int> diff(n + 1, 0); // 0-based

        for (int i = 0; i < q; i++) {
            int L, R, X;
            cin >> L >> R >> X;
            diff[L] += X;
            diff[R + 1] -= X;
        }

        vector<int> arr(n, 0);
        arr[0] = diff[0];
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] + diff[i];
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    }