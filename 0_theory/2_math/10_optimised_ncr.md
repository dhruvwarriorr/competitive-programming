# Optimised nCr (Modular)

Answers $\binom{n}{r} \bmod P$ in $O(1)$ per query after linear precomputation.

### Core Concept
* **When to use:** Many nCr queries with $n$ up to about $10^6$ and a prime modulus (usually $10^9 + 7$).
* **Time Complexity:** $O(N + \log P)$ precomputation, $O(1)$ per query.
* **Space Complexity:** $O(N)$.

### Core Logic
$$\binom{n}{r} = n! \cdot (r!)^{-1} \cdot ((n-r)!)^{-1} \pmod P$$

```cpp
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
}
```

The inverse factorials come from one Fermat inverse plus a backward sweep, see [Inverse Factorial](9_inverse_factorial.md).

### Pitfalls
* The modulus must be **prime** (or larger than $n$). Otherwise use [extended GCD](16_extended_gcd.md) or Lucas' theorem.
* Always return `0` when `r < 0` or `r > n`.

[View Full C++ Implementation](../../2_math/10_optimised_ncr.cpp)
