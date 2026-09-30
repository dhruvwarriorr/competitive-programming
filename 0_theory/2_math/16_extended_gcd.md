# Extended GCD & Modular Inverse (Any Modulus)

Extended Euclid finds integers $x, y$ with $ax + by = \gcd(a, b)$.

### Core Concept
* **When to use:** Modular inverse when the modulus is **not prime** (Fermat's little theorem needs a prime), solving linear Diophantine equations, CRT.
* **Time Complexity:** $O(\log \min(a, b))$.
* **Space Complexity:** $O(\log \min(a, b))$ recursion.

### Core Logic
From $\gcd(a, b) = \gcd(b, a \bmod b)$ and $bx_1 + (a \bmod b)y_1 = g$:
$$x = y_1, \qquad y = x_1 - \left\lfloor \frac{a}{b} \right\rfloor y_1$$

```cpp
long long extgcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) { x = 1; y = 0; return a; }
    long long x1, y1;
    long long g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}
```

If $\gcd(a, m) = 1$ then $ax + my = 1$, so $x \bmod m$ is $a^{-1} \pmod m$. If $\gcd(a, m) \ne 1$ the inverse does not exist.

[View Full C++ Implementation](../../2_math/16_extended_gcd.cpp)
