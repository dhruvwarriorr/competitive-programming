#include <bits/stdc++.h>
using namespace std;

int rangeSum(int L, int R, const vector<int>& prefix) {
    if (L == 0) return prefix[R];
    return prefix[R] - prefix[L - 1];
}

int main() {

    int n;
    if (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> prefix(n);
        if (n > 0) {
            prefix[0] = arr[0];
            for (int i = 1; i < n; i++) {
                prefix[i] = prefix[i - 1] + arr[i];
            }
        }

        int q;
        if (cin >> q) {
            while (q--) {
                int L, R;
                cin >> L >> R;
                cout << rangeSum(L, R, prefix) << "\n";
            }
        }
    }
    }