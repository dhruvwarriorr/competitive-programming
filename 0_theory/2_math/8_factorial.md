# Factorial with Modulo

Computes $n! \bmod M$, either one value or every value up to $N$ in a table.

### Core Concept
* **When to use:** Any counting problem that needs $n!$ for large $n$ (nCr, arrangements). Without the modulo, `long long` overflows at $n = 21$.
* **Time Complexity:** $O(N)$ for the whole table, $O(1)$ per lookup afterwards.
* **Space Complexity:** $O(N)$.

### Core Logic
$$n! = (n-1)! \times n \pmod{M}$$

```cpp
fact[0] = 1;
for (int i = 1; i <= N; i++) {
    fact[i] = fact[i - 1] * i % MOD;
}
```

Pair it with [inverse factorials](9_inverse_factorial.md) to get $\binom{n}{r}$ in $O(1)$.

[View Full C++ Implementation](../../2_math/8_factorial.cpp)
