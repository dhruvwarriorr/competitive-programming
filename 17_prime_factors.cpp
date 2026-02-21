#include <bits/stdc++.h>
using namespace std;

vector<long long> getPrimeFactors(long long n) {

    vector<long long> prime_factor;

    for (long long i = 2; i * i <= n; i++) {

        if (n % i == 0) {
            while (n % i == 0) {
                prime_factor.push_back(i);
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
    
    long long n;
    cin >> n;

    vector<long long> factors = getPrimeFactors(n);

    for (auto x : factors)
        cout << x << " ";

    return 0;
}