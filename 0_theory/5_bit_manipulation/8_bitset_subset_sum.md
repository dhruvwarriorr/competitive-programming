# Bitset Subset Sum

Uses `std::bitset` to run the subset-sum DP 64 times faster than a boolean array.

### Core Concept
* **When to use:** "Can we reach sum $S$ using some of these numbers?" with $S$ up to about $10^5$–$10^6$. See the [bitset cheatsheet](bit_manipulation_basics.md) for the API.
* **Time Complexity:** $O(N \cdot S / 64)$.
* **Space Complexity:** $O(S / 8)$ bytes.

### Core Logic
Bit $s$ of `dp` is set when some subset sums to $s$. Shifting left by $x$ adds $x$ to every reachable sum at once.

```cpp
bitset<S> dp;
dp[0] = 1;                 // empty subset
for (int x : items) {
    dp |= (dp << x);       // skip x, or take x
}
```

### Pitfalls
* The size of a `bitset` is a compile-time constant. Pick `S` above the maximum sum.

[View Full C++ Implementation](../../5_bit_manipulation/8_bitset_subset_sum.cpp)
