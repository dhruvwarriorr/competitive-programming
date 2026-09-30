# Prime Check (Trial Division)

Tests whether a single number is prime.

### Core Concept
* **When to use:** A handful of primality tests on numbers up to about $10^{12}$. For many tests on small numbers use the [sieve](1_sieve_of_eratosthenes.md).
* **Time Complexity:** $O(\sqrt{N})$.
* **Space Complexity:** $O(1)$.

A composite number always has a divisor $\le \sqrt{n}$, so checking up to $\sqrt{n}$ is enough.

### Core Logic
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

### Pitfalls
* Use `long long` (and `i * i <= n` with `long long i`) for $n > 2 \cdot 10^9$ to avoid overflow.
* $0$ and $1$ are **not** prime.

[View Full C++ Implementation](../../2_math/6_prime_check.cpp)
