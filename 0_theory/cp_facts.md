# CP Facts & Observations

Small facts that are easy to forget mid-contest and often unlock a problem.

## Divisibility & Primes

- Every integer $N \ge 2$ equals the product of its prime factors.
- If a number divides two integers, it divides their **difference** as well.
- Two consecutive integers are always coprime: $\gcd(n, n+1) = 1$.
- Three consecutive **odd** numbers are pairwise coprime (any common factor would divide their difference, which is $2$ or $4$, but they are all odd).
- Product of any two distinct prime factors of $N$ is at most $N$.
- The number of divisors of $N$ is small: about $\sqrt[3]{N}$ at worst (1344 for $N \le 10^9$, about $10^5$ for $N \le 10^{18}$).
- Gaps between consecutive primes are small: below $10^{18}$ the largest gap is under about $1500$; below $10^9$ it is under $300$.
- $a \bmod b \le a / 2$ when $a \ge b$. So the Euclidean algorithm takes $O(\log)$ steps.

## Multiples & Rounding

- Smallest multiple of $i$ that is $\ge L$:
  $$\left\lceil \frac{L}{i} \right\rceil \cdot i = \frac{L + i - 1}{i} \cdot i \quad(\text{integer division})$$
- Amount to add to $num$ to reach the next multiple of $x$ (0 if already one):
  $$\text{need} = (x - num \bmod x) \bmod x$$
- Integer ceil of $a / b$: `(a + b - 1) / b` (positive values).

## Counting

- Number of substrings of a string of length $n$: $n(n+1)/2$.
- Number of subarrays of an array of length $n$: $n(n+1)/2$.
- Number of subsets: $2^n$. Number of non-empty subsets: $2^n - 1$.
- **Pigeonhole principle:** if $n$ objects go into $m$ boxes and $n > m$, some box holds at least two.
- $\binom{n}{r}$ is largest at $r = \lfloor n/2 \rfloor$.

## Grids & Matrices

For an $n \times n$ grid, 0-based:

- Rotate 90° clockwise: $(i, j) \to (j,\ n - 1 - i)$
- Mirror left ↔ right: $(i, j) \to (i,\ n - 1 - j)$

In-place rotation: reverse the rows, then transpose. See [Matrix Rotation](8_misc/3_matrix_rotation.md).

## Bits

- Number of bits of $n$: $\lfloor \log_2 n \rfloor + 1$.
- $A + B = (A \oplus B) + 2(A \mathbin{\&} B)$.
- Popcount parity of $A \oplus B$ equals the parity of `popcount(A) + popcount(B)`.

More in [Bit Manipulation Basics](5_bit_manipulation/bit_manipulation_basics.md).

## Overflow & Limits Quick Table

| Type | Max | Rule of thumb |
| :-- | :-- | :-- |
| `int` | $2^{31} - 1 \approx 2.1 \cdot 10^9$ | Fine for values up to $\sim 10^9$, **not** for a product of two |
| `long long` | $2^{63} - 1 \approx 9.2 \cdot 10^{18}$ | Use for sums, products under a modulus $\sim 10^9$ |
| Operations per second | $\sim 10^8$ simple ops | $N \le 10^5$ allows $O(N \log N)$; $N \le 5000$ allows $O(N^2)$; $N \le 20$ allows $O(2^N)$ |

## See Also

[Math Formulas](math_formulas.md) · [GCD & LCM](gcd_lcm.md) · [Modular Arithmetic](modular_arithmetic.md) · [Combinatorics](combinatorics.md) · [Divisibility Rules](divisibility_rules.md)
