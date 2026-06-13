# Modular Arithmetic

## 1. Modular Properties & Division Constraint

* **Modulo Reduction Property**:
  $$a \% b \le \frac{a}{2} \quad (\text{for } a \ge b)$$
* **Addition**:
  $$(a + b) \% M = ((a \% M) + (b \% M)) \% M$$
* **Subtraction**:
  $$(a - b) \% M = ((a \% M) - (b \% M) + M) \% M$$
* **Multiplication**:
  $$(a \times b) \% M = ((a \% M) \times (b \% M)) \% M$$
* **Division** (using Modular Inverse):
  $$\left(\frac{a}{b}\right) \% M = ((a \% M) \times (b^{-1} \% M)) \% M$$
  Using Fermat's Little Theorem, if $M$ is prime:
  $$b^{-1} \% M = b^{M-2} \% M$$
  So:
  $$\left(\frac{a}{b}\right) \% M = ((a \% M) \times (b^{M-2} \% M)) \% M$$

---

## 2. Fermat's Little Theorem (FLT)

If $m$ is a prime number and $a$ is not divisible by $m$:

### Theorem
$$a^{m-1} \equiv 1 \pmod m$$

### Modular Inverse
Dividing by $a$ gives:
$$a^{m-2} \equiv a^{-1} \pmod m$$
This is the standard formula used for computing the modular multiplicative inverse of a number under a prime modulus.
