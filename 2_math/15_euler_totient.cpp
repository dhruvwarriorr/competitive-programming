#include <bits/stdc++.h>
using namespace std;

// phi(n) = count of integers in [1, n] coprime to n
// phi(n) = n * prod(1 - 1/p) over the distinct primes p | n

// Single value  -  O(sqrt N)
long long phi(long long n) {
    long long res = n;
    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0) n /= p;
            res -= res / p;
        }
    }
    if (n > 1) res -= res / n;
    return res;
}

// All values up to N  -  O(N log log N)
vector<int> phiSieve(int N) {
    vector<int> ph(N + 1);
    iota(ph.begin(), ph.end(), 0);
    for (int i = 2; i <= N; i++) {
        if (ph[i] == i) {  // i is prime
            for (int j = i; j <= N; j += i) ph[j] -= ph[j] / i;
        }
    }
    return ph;
}

int main() {

    int n;
    cin >> n;

    cout << phi(n) << "\n";

}
