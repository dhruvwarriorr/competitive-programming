# Legendre's Formula (Power of p in N!)

Finds the exponent of a prime $p$ in the prime factorization of $N!$.

### Core Concept
* **When to use:** Trailing zeros of $N!$ (use $p = 5$), divisibility of $N!$ by $p^k$, or the exponent of a prime in $\binom{n}{r}$.
* **Time Complexity:** $O(\log_p N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
$$v_p(N!) = \left\lfloor \frac{N}{p} \right\rfloor + \left\lfloor \frac{N}{p^2} \right\rfloor + \left\lfloor \frac{N}{p^3} \right\rfloor + \cdots$$

```cpp
int cnt = 0;
while (n > 0) {
    n /= p;
    cnt += n;
}
```

$p$ must be **prime**. For a composite $x$, factorize it and take the minimum of $v_{p_i}(N!) / e_i$ over its prime powers.

[View Full C++ Implementation](../../2_math/13_power_of_x_in_factorial.cpp)
