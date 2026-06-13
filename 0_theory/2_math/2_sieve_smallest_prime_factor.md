# Sieve with Smallest Prime Factor (SPF)

A modification of the Sieve of Eratosthenes that records the smallest prime factor (SPF) for every number up to $N$. This precomputation enables extremely fast prime factorization of any number in the range.

### Core Concept
* **Time Complexity:** $O(N \log \log N)$ precomputation.
* **Space Complexity:** $O(N)$ integer array.

### Core Logic
```cpp
vector <int> spf(n + 1);
for (int i = 0; i <= n; i++) spf[i] = i;
for(int i = 2; i * i <= n; i++) {
    if(spf[i] == i) {
        for(int j = i * i; j <= n; j += i) {
            if(spf[j] == j) spf[j] = i;
        }
    }
}
```

[View Full C++ Implementation](../../2_math/2_sieve_smallest_prime_factor.cpp)
