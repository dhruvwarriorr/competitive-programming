# Fermat's Little Theorem

Fermat's Little Theorem (FLT) is a fundamental theorem in number theory. It provides a powerful congruence relation for prime numbers and forms the basis of modular inverse calculations in competitive programming.

---

## 1. The Theorem

If $p$ is a prime number, then for any integer $a$:

$$a^p \equiv a \pmod p$$

### Coprime Formulation
If $a$ is not divisible by $p$ (i.e., $\gcd(a, p) = 1$), we can divide both sides by $a$ to get the more common form:

$$a^{p-1} \equiv 1 \pmod p$$

---

## 2. Application: Modular Multiplicative Inverse

A modular multiplicative inverse of $a$ modulo $m$ is an integer $x$ such that:

$$a \cdot x \equiv 1 \pmod m$$

We denote $x$ as $a^{-1} \pmod m$.

### Calculation via FLT
If the modulus $p$ is **prime** and $a$ is not a multiple of $p$, Fermat's Little Theorem states:

$$a^{p-1} \equiv 1 \pmod p$$

Multiplying both sides by $a^{-1}$:

$$a^{p-2} \equiv a^{-1} \pmod p$$

Thus, we can find the modular inverse of $a$ modulo a prime $p$ by computing:
$$a^{-1} \equiv a^{p-2} \pmod p$$

This is highly efficient to compute in $O(\log p)$ time using **Binary Exponentiation**.

---

## 3. C++ Implementation

### Code Snippet
```cpp
long long power(long long base, long long exp) {
    long long res = 1;
    base %= 1000000007; // Modulus P
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 1000000007;
        base = (base * base) % 1000000007;
        exp /= 2;
    }
    return res;
}

long long modInverse(long long n) {
    return power(n, 1000000007 - 2);
}
```

* **Time Complexity:** $O(\log p)$ per query.
* **Space Complexity:** $O(1)$.

---

## 4. Generalization: Euler's Totient Theorem

Fermat's Little Theorem is a special case of **Euler's Totient Theorem**. When the modulus $m$ is not prime but is coprime to $a$:

$$a^{\phi(m)} \equiv 1 \pmod m$$

Where $\phi(m)$ is Euler's totient function. When $m$ is prime, $\phi(m) = m - 1$, which simplifies directly back to Fermat's Little Theorem.
