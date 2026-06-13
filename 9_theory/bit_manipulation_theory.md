# Bitwise Operators & Theory

## Bitwise Operators

* **Left shift (`<<`)**: Multiplies a number by $2$ for each shift ($x \ll k = x \cdot 2^k$).
* **Right shift (`>>`)**: Divides a number by $2$ for each shift ($x \gg k = \lfloor x / 2^k \rfloor$).
* **AND (`&`)**: Output is 1 if both corresponding bits are 1.
* **OR (`|`)**: Output is 1 if at least one corresponding bit is 1.
* **XOR (`^`)**: Output is 1 if corresponding bits differ.
* **NOT (`~`)**: Inverts all bits of the number.

### Bit Subtracting & Adding Tricks
* **Subtracting 1**: Subtracting 1 toggles all bits from the rightmost set bit to the end (e.g. $n \& (n - 1)$ removes the lowest set bit).
* **Adding 1**: Adding 1 toggles all bits from the rightmost unset bit to the end.

### Common Bit Tricks
* If $A \oplus B = C$, then $A \oplus C = B$ and $B \oplus C = A$.
* $A \& B \le \min(A, B)$
* $A \ | \ B \ge \max(A, B)$
* $A + B = (A \oplus B) + 2(A \& B)$
* $A + B = (A \ | \ B) + (A \& B)$
* Parity of set bits in $A \oplus B$: Let count of set bits in $A$ be $X$, and in $B$ be $Y$. The set bits in $A \oplus B$ is even if $X+Y$ is even, and odd if $X+Y$ is odd.
* $\lfloor\log_2(n)\rfloor$ gives the exponent of the highest power of 2 less than or equal to $n$.
* Parity check: `(x & 1) == 1` (odd), `(x & 1) == 0` (even).
* Count total bits: `log2(n) + 1`.
* Check $K$-th bit: `(x & (1 << k)) != 0` (set), `== 0` (unset).
* Set $I$-th bit: `x = x | (1 << i)`.
* Unset $K$-th bit: `x = x & ~(1 << k)`.
* Toggle $I$-th bit: `x = x ^ (1 << i)`.
* Check if power of 2: `(x & (x - 1)) == 0` (yes), `> 0` (no).
* Turn off rightmost set bit: `n = n & (n - 1)`.
* Get rightmost unset bit (0-based): `idx = __builtin_ctz((~n) & (n + 1))`.
* Get $K$-th bit (1-based): `bit = (n >> (k - 1)) & 1`.
* Bitwise XOR Formula:
  $$(a \oplus (a \& b)) + (b \oplus (a \& b)) = a \oplus b$$

### Built-in C++ Functions
* `__builtin_popcount(x)`: Counts set bits.
* `__builtin_clz(x)`: Counts leading zeros.
* `__builtin_ctz(x)`: Counts trailing zeros.
* `__builtin_ffs(x)`: Finds the 1-based position of the lowest set bit.
* `__builtin_parity(x)`: Parity of set bits (returns 1 for odd, 0 for even).

## std::bitset Cheatsheet

* Declaring: `bitset<N> name;` (allocates $N$ bits).
* From string: `bitset<N> name("10101");`
* From integer: `bitset<N> name(val);`
* Methods:
  * `count()`: Number of set bits.
  * `flip()`: Flips all bits (or a specific bit by index).
  * `any()`: Returns true if any bit is set.
  * `none()`: Returns true if no bits are set.
  * `all()`: Returns true if all bits are set.
  * `set()`: Sets all bits (or a specific bit to 1/0).
  * `reset()`: Resets all bits (or a specific bit to 0).
  * `size()`: Returns the number of bits.
  * `test(idx)`: Tests whether a specific bit is set.

## Key Encoding & Decoding

For maps or matrix coordinates, we can flatten keys into a single integer:
```ini
encoded = popcount * BASE + value
```

So decoding:
```cpp
value = encoded % BASE;
```

### Why Modulo Works
```matlab
(popcount * BASE) % BASE = 0
```
*Note: $\text{BASE}$ must be strictly greater than the maximum possible value of the secondary key.*

---

## ASCII Table Cheatsheet

Below are the key ASCII character decimal mappings commonly used in competitive programming:

| Decimal | Character | Description |
|---|---|---|
| 0 | `\0` | NULL character |
| 10 | `\n` | Line feed (newline) |
| 32 | ` ` | Space |
| 48 - 57 | `0` - `9` | Digits (0 to 9) |
| 65 - 90 | `A` - `Z` | Uppercase letters (A to Z) |
| 97 - 122 | `a` - `z` | Lowercase letters (a to z) |

### Key Conversions in C++
* Convert character digit to integer: `char_digit - '0'` (e.g. `'5' - '0' == 5`)
* Convert lowercase to uppercase: `char_lower - 'a' + 'A'` (or using `toupper()`)
* Convert uppercase to lowercase: `char_upper - 'A' + 'a'` (or using `tolower()`)

