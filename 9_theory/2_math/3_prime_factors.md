# Prime Factorization (Trial Division)

Finds the prime factors of a single number $N$ by testing divisibility starting from 2 up to $\sqrt{N}$.

### Core Concept
* **When to use:** When you need the factorization of a single, large number $N$ and cannot precompute a sieve.
* **Time Complexity:** $O(\sqrt{N})$.
* **Space Complexity:** $O(\log N)$ distinct factors.

### Core Logic
```cpp
vector <int> prime_factor;
for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        prime_factor.push_back(i);
        while (n % i == 0) n /= i;
    }
}
if (n > 1) prime_factor.push_back(n);
```

[View Full C++ Implementation](../../2_math/3_prime_factors.cpp)
