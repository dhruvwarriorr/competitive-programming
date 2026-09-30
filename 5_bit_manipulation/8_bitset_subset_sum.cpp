#include <bits/stdc++.h>
using namespace std;

// Subset-sum reachability with std::bitset  -  O(N * S / 64)
// bit s of `dp` is 1 <=> some subset of the items seen so far sums to s.
const int S = 100005;

int main() {

    int n;
    cin >> n;

    bitset<S> dp;
    dp[0] = 1;  // empty subset

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dp |= (dp << x);  // either skip x, or add x to every reachable sum
    }

    cout << "Reachable sums: " << dp.count() << "\n";

    int target;
    cin >> target;
    cout << (dp.test(target) ? "YES" : "NO") << "\n";

}
