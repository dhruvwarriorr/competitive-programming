#include <bits/stdc++.h>
using namespace std;

// returns all prime numbers from 1 to n
vector<int> sieve(int n) {
    
    vector<bool> isprime(n + 1, true);

    if (n >= 0) {
        isprime[0] = false;
    }
    if (n >= 1) {
        isprime[1] = false;
    }

   
    for (int i = 2; i * i <= n; i++) {
        if (isprime[i]) {
            
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isprime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    int n;
    cin >> n;

    vector<int> primes = sieve(n);

    for (int p : primes) {
        cout << p << " ";
    }
}