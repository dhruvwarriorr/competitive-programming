# Fenwick Tree (Binary Indexed Tree)

A compact structure for point updates and prefix sums. Simpler and faster in practice than a [segment tree](1_segment_tree.md) when the operation is invertible (sum, xor).

### Core Concept
* **When to use:** Dynamic prefix/range sums, counting inversions, order statistics on values.
* **Time Complexity:** $O(\log N)$ per update and query, $O(N)$ build via repeated `add`.
* **Space Complexity:** $O(N)$.

`tree[i]` stores the sum of the block of length `i & -i` that ends at $i$. Adding `i & -i` walks up to the next block that contains $i$; subtracting it walks down over disjoint blocks.

### Core Logic
```cpp
void add(int i, long long delta) {          // a[i] += delta, 1-based
    for (; i <= n; i += i & -i) tree[i] += delta;
}
long long prefix(int i) {                   // sum of a[1..i]
    long long s = 0;
    for (; i > 0; i -= i & -i) s += tree[i];
    return s;
}
// range(l, r) = prefix(r) - prefix(l - 1)
```

`lowerBound(target)` binary-lifts down the tree in $O(\log N)$ to find the first index whose prefix sum reaches `target` (non-negative values only).

### Pitfalls
* Indices are **1-based**; index `0` loops forever.
* For range update + range query keep two Fenwick trees, or use the [lazy segment tree](2_lazy_segment_tree.md).
* It cannot do min/max under arbitrary updates.

[View Full C++ Implementation](../../9_segment_tree/3_fenwick_tree.cpp)
