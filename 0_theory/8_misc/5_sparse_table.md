# Sparse Table

Sparse Table is a static range query data structure for immutable arrays.

If array does not change and query count is large, Sparse Table is often faster and simpler than Segment Tree.

## Core Idea

Precompute answers for all ranges of length $2^j$.

`st[j][i]` stores answer for segment `[i, i + 2^j - 1]`.

For min query on `[l, r]`:

- Let `j = floor(log2(r - l + 1))`
- Use two blocks of length `2^j`:
- `[l, l + 2^j - 1]` and `[r - 2^j + 1, r]`

For idempotent operations (min/max/gcd), overlap is safe, so query is $O(1)$.

## Complexity

- Build: $O(N\log N)$
- Query (idempotent op): $O(1)$
- Space: $O(N\log N)$

## Template Usage (Current File)

The implementation in [../../8_misc/5_sparse_table.cpp](../../8_misc/5_sparse_table.cpp) is for range minimum query:

- Build: `SparseTableMin spt(a)`
- Query: `spt.queryMin(l, r)`

### Input Query Contract Used in `main()`

- Read `n, q`
- Read array `a`
- For each query, read `l, r` and print minimum on `[l, r]`

### Minimal Usage Snippet

```cpp
vector<long long> a = {8, 6, 3, 7, 2, 9};
SparseTableMin spt(a);

cout << spt.queryMin(1, 4);   // min on a[1..4]
```

## When To Use Sparse Table vs Segment Tree

Use Sparse Table when:

- Array is immutable.
- Operation is idempotent and associative (min/max/gcd).
- Query count is very high.

Use Segment Tree when:

- Updates are present.
- Operation/query type is dynamic.

## How To Adapt This Template

- Replace `min` merge in build and query for max/gcd.
- Keep $O(1)$ query only for idempotent operations.
- For non-idempotent operations (like sum/xor), use disjoint decomposition and query in $O(\log N)$.

## Common Pitfalls

- Using Sparse Table on mutable arrays.
- Wrong log table indexing for short ranges.
- Confusing 0-based and 1-based query input.

[View Full C++ Implementation](../../8_misc/5_sparse_table.cpp)
