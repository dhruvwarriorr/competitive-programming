#include <bits/stdc++.h>
using namespace std;

vector<int> getFactors(int n) {
    vector<int> factors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) factors.push_back(n / i);
        }
    }
    return factors;
}

int main() {

    int n;
    if (cin >> n) {
        vector<int> factors = getFactors(n);
        sort(factors.begin(), factors.end());
        for (int x : factors) cout << x << " ";
        cout << "\n";
    }
    }