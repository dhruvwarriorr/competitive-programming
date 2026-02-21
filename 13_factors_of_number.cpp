#include <bits/stdc++.h>
using namespace std;

vector<int> getFactors(int n) {
    vector<int> factors;

    for (int i = 1; 1LL * i * i <= n; i++) {
        if (n % i == 0) {

            factors.push_back(i);

            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    return factors;
}

int main() {
    int n;
    cin >> n;

    vector<int> factors = getFactors(n);

    for (int x : factors) {
        cout << x << " ";
    }
}