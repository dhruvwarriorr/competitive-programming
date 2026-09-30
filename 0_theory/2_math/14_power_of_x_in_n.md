# Power of x in N

Counts how many times $x$ divides $N$, i.e. the largest $k$ with $x^k \mid N$.

### Core Concept
* **When to use:** Extracting the exponent of a prime while factorizing, counting trailing zeros in base $x$.
* **Time Complexity:** $O(\log_x N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int cnt = 0;
while (n % x == 0) {
    n /= x;
    cnt++;
}
```

### Pitfalls
* Guard `x > 1` and `n > 0`: with `x = 1` or `n = 0` the loop never ends.

[View Full C++ Implementation](../../2_math/14_power_of_x_in_n.cpp)
