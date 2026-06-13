#include <bits/stdc++.h>
using namespace std;

void solve(double x) {
    // x = number whose square root we want to find
    double low = 0, high = x;
    double ans = 0;

    double precision = 1e-12;
    int iterations = 100;

    for(int i = 0; i < iterations; i++) {
        double mid = (low + high) / 2;

        if (mid * mid <= x) {
            ans = mid;
            low = mid + precision;
        } else {
            high = mid - precision;
        }
    }

    cout << fixed << setprecision(18) << ans << '\n';
}

int main() {

    double x;
    cin >> x;

    solve(x);

}
