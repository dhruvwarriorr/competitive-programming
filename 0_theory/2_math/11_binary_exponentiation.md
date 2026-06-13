# Binary Exponentiation

Computes $A^B \pmod M$ in $O(\log B)$ time by squaring the base recursively or iteratively.

### Core Concept
* **Time Complexity:** $O(\log B)$.
* **Space Complexity:** $O(1)$.

### Core Logic
$$A^B = \begin{cases} (A^{B/2})^2 & \text{if } B \text{ is even} \\ A \cdot (A^{(B-1)/2})^2 & \text{if } B \text{ is odd} \end{cases}$$

```cpp
long long res = 1;
base %= mod;
while (exp > 0) {
    if (exp % 2 == 1) res = (res * base) % mod;
    base = (base * base) % mod;
    exp /= 2;
}
```

[View Full C++ Implementation](../../2_math/11_binary_exponentiation.cpp)
