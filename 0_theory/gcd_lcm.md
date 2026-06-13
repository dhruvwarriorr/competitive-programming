# Greatest Common Divisor & Least Common Multiple

## 1. Greatest Common Divisor (GCD)

* If $m$ is any integer, then:
  $$\gcd(a, b) = \gcd(a + m \cdot b, b)$$
* GCD of three numbers:
  $$\gcd(a, b, c) = \gcd(a, \gcd(b, c))$$
* Basic properties:
  * $\gcd(a, 0) = a$
  * $\gcd(a, 1) = 1$
  * $\gcd(a, b) = \gcd(b, a)$
  * $\gcd(a, b) = \gcd(a, a+b)$
  * $\gcd(a, b) = \gcd(b, a \% b)$
  * $\gcd(a, b) = \gcd(b, a - b)$
  * $\gcd(a, b) = \gcd(a, b - k a)$
  * $\gcd(k a, k b) = k \cdot \gcd(a, b)$
  * If $\dots$ then $a, b$ are coprime ($\gcd(a, b) = 1$)
  * $\gcd(n, n+1) = 1$
  * $\gcd(a, b) \le \min(a, b)$
  * $\gcd(a^m, a^n) = a^{\min(m, n)}$

---

## 2. Euclidean Algorithm

Used to calculate the Greatest Common Divisor (GCD) of two numbers $a$ and $b$.

### Theorem
$$\gcd(a, b) = \begin{cases} a & \text{if } b = 0 \\ \gcd(b, a \bmod b) & \text{otherwise} \end{cases}$$

### Implementations

#### Recursive
```cpp
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
```

#### Iterative
```cpp
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
```

### Time Complexity
$$O(\log(\min(a, b)))$$

---

## 3. Least Common Multiple (LCM)

* **Product relationship**:
  $$\gcd(a, b) \times \text{lcm}(a, b) = a \times b$$
* **Properties**:
  * $\text{lcm}(a, 0) = 0$
  * $\text{lcm}(a, 1) = a$
  * $\text{lcm}(a, b) \ge \max(a, b)$
  * If $\gcd(a, b) = 1$, then $\text{lcm}(a, b) = a \times b$
  * $\text{lcm}(a^m, a^n) = a^{\max(m, n)}$

---

## 4. Number & Sum of Divisors

Given the prime factorization of $N$:
$$N = p_1^{e_1} p_2^{e_2} \dots p_k^{e_k}$$

### Number of Divisors $d(n)$
$$d(n) = (e_1 + 1) \cdot (e_2 + 1) \dots (e_k + 1)$$

### Sum of Divisors $\sigma(n)$
$$\sigma(n) = \frac{p_1^{e_1+1} - 1}{p_1 - 1} \cdot \frac{p_2^{e_2+1} - 1}{p_2 - 1} \dots \frac{p_k^{e_k+1} - 1}{p_k - 1}$$
* **Practice problem reference**: [SPOJ DIVSUM](https://www.spoj.com/problems/DIVSUM/)
