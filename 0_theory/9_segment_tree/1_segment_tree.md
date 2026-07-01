# Segment Tree (Point Update + Range Query)

Segment Tree is a binary tree over array ranges. It helps when we need many online range queries and updates.

## Why Segment Tree

If we compute each range query directly, worst-case is $O(N)$ per query.
With Segment Tree:

- Build once in $O(N)$
- Query in $O(\log N)$
- Point update in $O(\log N)$

This is ideal for competitive programming when both updates and queries are mixed.

## Core Idea

Each node stores the answer for one segment `[l, r]`.

- Root stores the full range `[0, n-1]`
- Left child stores `[l, mid]`
- Right child stores `[mid+1, r]`

For the current implementation, each node stores **sum**.

## Complexity

- Build: $O(N)$
- Point set update: $O(\log N)$
- Range sum query: $O(\log N)$
- Space: $O(4N)$

## Template Usage (Current File)

The implementation in [../../9_segment_tree/1_segment_tree.cpp](../../9_segment_tree/1_segment_tree.cpp) exposes these methods:

- `SegTree st(a)`
- `st.pointSet(1, 0, n - 1, pos, val)`
- `st.rangeSum(1, 0, n - 1, l, r)`

### Input Query Contract Used in `main()`

- `type = 1 pos val` means set `a[pos] = val`
- `type = 2 l r` means print sum on range `[l, r]`

### Minimal Usage Snippet

```cpp
vector<long long> a = {5, 1, 3, 7, 2};
int n = (int)a.size();
SegTree st(a);

st.pointSet(1, 0, n - 1, 2, 10);           // a[2] = 10
cout << st.rangeSum(1, 0, n - 1, 1, 3);    // sum(1..3)
```

## How To Convert This Template

To switch from range sum to another operation:

- Change merge rule in `build` and after updates.
- Change neutral return in no-overlap case inside query.

Examples:

- Min query: merge with `min`, neutral as very large value.
- Max query: merge with `max`, neutral as very small value.
- XOR query: merge with `^`, neutral as `0`.
- GCD query: merge with `gcd`, neutral as `0`.

## Common Pitfalls

- Index mismatch (0-based vs 1-based input).
- Wrong neutral value in query no-overlap case.
- Forgetting to rebuild parent after child update.
- Overflow for large sums: use `long long`.

[View Full C++ Implementation](../../9_segment_tree/1_segment_tree.cpp)
