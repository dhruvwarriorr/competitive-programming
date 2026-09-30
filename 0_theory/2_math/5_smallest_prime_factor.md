# Smallest Prime Factor (Single Number)

Finds the smallest prime that divides one given number $n$ by trial division.

### Core Concept
* **When to use:** You only need the SPF of one (or a few) numbers. For many queries, precompute with the [SPF sieve](2_sieve_smallest_prime_factor.md) instead.
* **Time Complexity:** $O(\sqrt{N})$.
* **Space Complexity:** $O(1)$.

If no divisor is found up to $\sqrt{n}$, then $n$ itself is prime, so its smallest prime factor is $n$.

### Core Logic
```cpp
int spf(int n) {
    if (n <= 1) return n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return i;
    }
    return n;
}
```

[View Full C++ Implementation](../../2_math/5_smallest_prime_factor.cpp)
