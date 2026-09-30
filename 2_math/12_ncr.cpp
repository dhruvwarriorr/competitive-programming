#include <bits/stdc++.h>
using namespace std;

// nCr without modulo, no factorial overflow  -  O(min(r, n - r))
// After step i, res == C(n - r + i, i), so the division is always exact.
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    r = min(r, n - r);

    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - r + i) / i;
    }
    return res;
}

int main() {

    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << "\n";

}
