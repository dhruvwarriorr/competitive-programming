# Euler's Totient Function

## 1. Definition & Properties

$\phi(N)$ is the number of integers between 1 and $N$ inclusive, which are coprime to $N$ (i.e. $\gcd(i, N) = 1$).

### Basic Properties
* If $p$ is a prime number, then:
  $$\phi(p) = p - 1$$
* If $p$ is a prime number and $k \ge 1$:
  $$\phi(p^k) = p^k - p^{k-1}$$
  *(There are exactly $p^k / p = p^{k-1}$ numbers between 1 and $p^k$ that are divisible by $p$.)*
* Multiplicative property:
  $$\phi(a \cdot b) = \phi(a) \cdot \phi(b) \quad \text{if } \gcd(a, b) = 1$$
  *(This relation is not trivial to see. It follows from the Chinese Remainder Theorem.)*
* For non-coprime $a$ and $b$:
  $$\phi(ab) = \phi(a) \cdot \phi(b) \cdot \frac{d}{\phi(d)} \quad \text{where } d = \gcd(a, b)$$

---

## 2. Product Formula Derivation

Given the prime factorization of $n$:
$$n = p_1^{k_1} p_2^{k_2} \dots$$

Using the multiplicative property:
$$\phi(n) = \phi(p_1^{k_1}) \cdot \phi(p_2^{k_2}) \dots$$
$$= (p_1^{k_1} - p_1^{k_1 - 1}) \cdot (p_2^{k_2} - p_2^{k_2 - 1}) \dots$$
$$= p_1^{k_1}\left(1 - \frac{1}{p_1}\right) \cdot p_2^{k_2}\left(1 - \frac{1}{p_2}\right) \dots$$
$$\phi(n) = n \left(1 - \frac{1}{p_1}\right)\left(1 - \frac{1}{p_2}\right) \dots$$

This simplifies to:
$$\phi(n) = n \prod_{p | n} \left(1 - \frac{1}{p}\right)$$

*Note: For $n \le 10^6$, $\phi(n)$ values can be precomputed using a Sieve-like method.*

---

## 3. Euler's Theorem & Modulo Reduction

### Euler's Theorem
$$a^{\phi(m)} \equiv 1 \pmod m \quad \text{if } a \text{ and } m \text{ are relatively prime}$$

### Fermat's Little Theorem (Special Case)
When $m$ is a prime number $p$, Euler's Totient function simplifies to $\phi(p) = p - 1$. Under this condition, Euler's Theorem reduces directly to **Fermat's Little Theorem**:
$$a^{p-1} \equiv 1 \pmod p \quad \text{if } a \text{ is not divisible by } p$$

For a detailed analysis, applications, and C++ code implementation, see [Fermat's Little Theorem](fermat_little_theorem.md).

### Exponent Reduction Rules

* General case (using Euler's Totient):
  $$a^b \% m = a^{b \% \phi(m)} \% m$$
* When $m$ is prime (Fermat's Little Theorem):
  $$a^b \% m = a^{b \% (m-1)} \% m$$

### Special Modulo Cases
* $a^0 \% m = 1 \% m$
* $a^1 \% m = a \% m$
* $a^{m-1} \% m = 1 \% m \quad (\text{when } m \text{ is prime})$
* $a^m \% m = a \% m \quad (\text{when } m \text{ is prime})$

* **Practice problem reference**: [CSES Exponentiation II](https://cses.fi/problemset/task/1712)

---

## 4. Power Towers (Recursive Reduction)

For huge power towers:
$$a^{b^{c^d}} \pmod m$$

We can reduce exponents recursively by traversing down using the Totient function:
$$d \to \% \phi(\phi(\phi(m)))$$
$$c^d \to \% \phi(\phi(m))$$
$$b^{c^d} \to \% \phi(m)$$
$$a^{b^{c^d}} \to \% m$$

This works because of the chain of totients:
$$\phi(\phi(\phi(m))) \to \phi(\phi(m)) \to \phi(m) \to m$$
Each step reduces the modulus significantly, allowing us to compute power towers efficiently.
