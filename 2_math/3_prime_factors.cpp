#include <bits/stdc++.h>
using namespace std;

vector <int> getDistinctPrimeFactors(int n) {
    vector <int> prime_factor;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime_factor.push_back(i);
            while (n % i == 0) {
                 n /= i;
            }
        }
    }

    if (n > 1) {
        prime_factor.push_back(n);
    }
    return prime_factor;
}

int main() {

    int n;
    cin >> n;

    vector <int> factors = getDistinctPrimeFactors(n);
    for (int x : factors) {
        cout << x << " ";
    }
    cout << "\n";

}
