# nCr (Without Modulo)

Computes the exact value of $\binom{n}{r}$ without ever forming $n!$.

### Core Concept
* **When to use:** The exact answer fits in `long long` (roughly $\binom{n}{r} < 9 \cdot 10^{18}$) but $n!$ does not.
* **Time Complexity:** $O(\min(r, n-r))$.
* **Space Complexity:** $O(1)$.

### Core Logic
Multiply and divide one term at a time. After step $i$ the running value equals $\binom{n-r+i}{i}$, an integer, so the division is always exact.

```cpp
r = min(r, n - r);
long long res = 1;
for (int i = 1; i <= r; i++) {
    res = res * (n - r + i) / i;
}
```

Use the symmetry $\binom{n}{r} = \binom{n}{n-r}$ to keep the loop short. For queries under a modulus use [Optimised nCr](10_optimised_ncr.md).

[View Full C++ Implementation](../../2_math/12_ncr.cpp)
