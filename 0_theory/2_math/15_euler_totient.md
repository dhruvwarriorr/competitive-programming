# Euler's Totient Function

$\phi(n)$ counts the integers in $[1, n]$ that are coprime to $n$. See [Euler's Totient notes](../euler_totient.md) for the theory, exponent reduction and power towers.

### Core Concept
* **When to use:** Euler's theorem, reducing huge exponents, counting coprime pairs.
* **Time Complexity:** $O(\sqrt{N})$ for one value, $O(N \log\log N)$ to sieve every value up to $N$.
* **Space Complexity:** $O(1)$ single, $O(N)$ sieve.

### Core Logic
$$\phi(n) = n \prod_{p \mid n} \left(1 - \frac{1}{p}\right)$$

```cpp
long long phi(long long n) {
    long long res = n;
    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0) n /= p;
            res -= res / p;          // res *= (1 - 1/p)
        }
    }
    if (n > 1) res -= res / n;       // leftover prime factor
    return res;
}
```

The sieve version starts from `ph[i] = i` and, for every prime `i`, applies `ph[j] -= ph[j] / i` to all its multiples.

[View Full C++ Implementation](../../2_math/15_euler_totient.cpp)
