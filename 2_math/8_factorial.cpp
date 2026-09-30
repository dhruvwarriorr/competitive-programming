#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
const long long MOD = 1e9 + 7;

long long fact[MAXN];

// Precompute n! % MOD for every n <= N  -  O(N)
void computeFactorials(int N) {
    fact[0] = 1;
    for (int i = 1; i <= N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
}

// Single factorial % MOD  -  O(n)
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i % MOD;
    }
    return result;
}

int main() {

    int n;
    cin >> n;

    computeFactorials(n);
    cout << factorial(n) << "\n";  // same as fact[n]

}
