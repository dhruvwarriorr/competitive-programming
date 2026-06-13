# Combinatorics

## 1. Binomial Coefficients

### Definition
Number of ways to choose $r$ items from $n$ items:
$$\binom{n}{r} = \frac{n!}{r!(n-r)!}$$

### Interpretation
* Order does **not** matter.
* **Example**: Choosing $\{1, 2\}$ and $\{2, 1\}$ are the same.

---

## 2. Permutations vs Combinations

### Permutations (Order Matters)
Number of ways to arrange/select $r$ elements from $n$:
$$^n P_r = \frac{n!}{(n-r)!}$$

**Example**:
* Arrange 3 out of 5 elements:
  $$5 \times 4 \times 3$$

### Combinations (Order Does Not Matter)
Since every group of $r$ elements can be arranged in $r!$ ways:
$$\binom{n}{r} = \frac{^n P_r}{r!}$$

---

## 3. Modular nCr Computation
This optimizes preprocessing from $O(N \log \text{MOD})$ to $O(N)$.

### Final nCr Formula Under Mod
$$\binom{n}{r} = \text{fact}[n] \cdot \text{invfact}[r] \cdot \text{invfact}[n-r] \pmod{\text{MOD}}$$

### Code (C++)
```cpp
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
}
```

### Complexity
* **Precompute**: $O(N)$
* **Each query**: $O(1)$

---

## 4. Alternative O(r) nCr Computation
Useful when:
* $n$ is huge ($\approx 10^{18}$)
* $r$ is small

### Formula
$$\binom{n}{r} = \frac{n(n-1)(n-2)\dots(n-r+1)}{1 \cdot 2 \cdot 3 \dots r}$$

### Complexity
* $O(r)$

---

## 5. Important Binomial Identities

### Symmetry Identity
$$\binom{n}{r} = \binom{n}{n-r}$$
* **Reason**: Choosing $r$ items is equivalent to rejecting $n-r$ items.

### Pascal's Identity
$$\binom{n}{r} = \binom{n-1}{r} + \binom{n-1}{r-1}$$
* **Interpretation**: Either pick the current item or don't.

### Sum of All Binomial Coefficients
$$\sum_{r=0}^{n} \binom{n}{r} = 2^n$$
* **Reason**: Total subsets of any size.

---

## 6. Useful Selection Results

### k items always included
Choose remaining:
$$\binom{n-k}{r-k}$$

### k items never included
Choose remaining:
$$\binom{n-k}{r}$$

---

## 7. Arrangements

### Distinct Elements
Number of arrangements of $n$ distinct elements:
$$n!$$

### Similar Elements
If frequencies are:
$$a_1, a_2, a_3 \dots a_k$$
then number of arrangements is:
$$\frac{(a_1 + a_2 + \dots + a_k)!}{a_1! a_2! \dots a_k!}$$

**Example**:
* Arrangements of string `"AABBC"`:
  $$\frac{5!}{2! 2! 1!}$$

### Circular Permutations
* **Circular Permutations**:
  $$P_c = (n - 1)!$$
* **Circular Necklace Permutations** (where clockwise and counter-clockwise reflections are considered identical):
  $$P_c = \frac{(n - 1)!}{2}$$

---

## 8. Stars and Bars
Distribute $n$ identical objects into $k$ distinct boxes.

### Standard Formula (Allowing Empty Boxes)
Number of ways to distribute:
* $n$ identical objects
* into $k$ distinct boxes
* allowing empty boxes

**Answer**:
$$\binom{n+k-1}{k-1}$$

**Equivalent form**:
$$\binom{n+k-1}{n}$$
*(Both are same due to symmetry of nCr)*

### Equation Interpretation
Stars and bars is basically counting solutions of equations.

#### Non-negative Integer Solutions
Equation:
$$x_1 + x_2 + \dots + x_k = n \quad \text{where } x_i \ge 0$$

**Answer**:
$$\binom{n+k-1}{k-1}$$

**Why?**
Each variable represents one box.

### General Lower Bound Constraints
Suppose:
$$x_i \ge a_i$$
*(This is extremely common in problems)*

#### Transformation
Let:
$$y_i = x_i - a_i \implies y_i \ge 0$$

Substitute into equation:
$$y_1 + y_2 + \dots + y_k = n - \sum_{i=1}^k a_i$$

Now apply stars and bars:
$$\text{Number of solutions} = \binom{n - \sum a_i + k - 1}{k - 1}$$
