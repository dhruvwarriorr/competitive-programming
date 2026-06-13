# Factorials & Modular Inverse in $O(1)$

Precomputes factorials and inverse factorials modulo a prime $P$. This allows calculating combinations and permutations modulo $P$ in $O(1)$ time.

### Core Concept
* **Time Complexity:** $O(N)$ precomputation, $O(1)$ query.
* **Space Complexity:** $O(N)$.

### Core Logic
Using Fermat's Little Theorem: $a^{P-2} \equiv a^{-1} \pmod P$.
To compute inverse factorials linearly:
$$\text{invFact}[i] = \text{invFact}[i+1] \times (i+1) \pmod P$$

```cpp
invFact[n] = power(fact[n], MOD - 2);
for (int i = n - 1; i >= 0; i--) {
    invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
}
```

[View Full C++ Implementation](../../2_math/9_inverse_factorial.cpp)
