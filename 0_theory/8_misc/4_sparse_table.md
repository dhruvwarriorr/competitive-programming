# Sparse Table

A static range-query structure for arrays that never change. If the operation is idempotent (min, max, gcd, and, or), queries are $O(1)$.

## Core Idea

Precompute the answer for every range of length $2^j$: `table[i][j]` covers `[i, i + 2^j - 1]`.

For a query on `[l, r]`:

- Let `j = floor(log2(r - l + 1))`
- Two blocks of length $2^j$ cover the range: `[l, l + 2^j - 1]` and `[r - 2^j + 1, r]`
- They may overlap. That is harmless for idempotent operations, so combine them directly.

For non-idempotent operations (sum, xor) overlap would double count, so the range is instead cut into disjoint power-of-two blocks in $O(\log N)$.

## Complexity

- Build: $O(N \log N)$
- Query, idempotent: $O(1)$
- Query, non-idempotent: $O(\log N)$
- Space: $O(N \log N)$

## Template Usage (Current File)

[../../8_misc/4_sparse_table.cpp](../../8_misc/4_sparse_table.cpp) is a **generic template** `SparseTable<Node>`. Provide a `Node` with an identity constructor, a value constructor and `merge(l, r)`.

| Method | Use for | Cost |
| :-- | :-- | :-- |
| `queryIdempotent(l, r)` | min, max, gcd | $O(1)$ |
| `queryNormal(l, r)` | xor, sum | $O(\log N)$ |

The file ships `NodeMin` (idempotent) and `NodeXor` (non-idempotent) examples.

### Input Contract Used in `main()`

- `n q`, then the array
- each query `l r` (0-based, inclusive) prints `min xor` of `a[l..r]`

### Minimal Usage Snippet

```cpp
vector<long long> a = {8, 6, 3, 7, 2, 9};
SparseTable<NodeMin> spt(a.size(), a);

cout << spt.queryIdempotent(1, 4).val;   // min(6, 3, 7, 2) = 2
```

## Sparse Table vs Segment Tree

Use a Sparse Table when the array is immutable, the operation is idempotent and there are many queries.
Use a [Segment Tree](../9_segment_tree/1_segment_tree.md) when there are updates or the operation is not idempotent.

## Common Pitfalls

- Using it on an array that gets updated.
- Calling `queryIdempotent` with sum/xor (double counts the overlap).
- Confusing 0-based and 1-based query input.

[View Full C++ Implementation](../../8_misc/4_sparse_table.cpp)
