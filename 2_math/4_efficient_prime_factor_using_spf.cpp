#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> primeFactorization(int x, const vector<int>& spf) {
    vector<pair<int, int>> ans;

    while (x != 1) {
        int prime = spf[x];
        int cnt = 0;

        while (x % prime == 0) {
            cnt++;
            x = x / prime;
        }

        ans.push_back({prime, cnt});
    }

    return ans;
}

int main() {

    int maxN = 1e6 + 5;
    vector<bool> isPrime(maxN, true);
    vector<int> spf(maxN, 1e9);

    for (long long i = 2; i < maxN; i++) {
        if (isPrime[i]) {
            spf[i] = i;
            for (long long j = i * i; j < maxN; j += i) {
                isPrime[j] = false;
                spf[j] = min(spf[j], (int)i);
            }
        }
    }

    int n;
    if (cin >> n) {
        vector<pair<int, int>> primeF = primeFactorization(n, spf);
        for (auto p : primeF) {
            cout << p.first << "^" << p.second << " ";
        }
        cout << "\n";
    }
    }