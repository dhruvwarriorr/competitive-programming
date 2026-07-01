# Lazy Segment Tree (Range Update + Range Query)

Lazy Segment Tree is used when range updates are frequent. Instead of updating every element in `[l, r]`, we defer updates using a `lazy` array.

## Why Lazy Propagation

Without lazy propagation:

- Range update can become $O(N)$ in worst case.

With lazy propagation:

- Range update in $O(\log N)$
- Range query in $O(\log N)$

## Core Idea

Current template supports:

- Range add update: add `val` to all elements in `[l, r]`
- Range sum query: sum of values in `[l, r]`

`lazy[idx]` means: node `idx` has pending increment not fully pushed to children yet.

When we call `push(idx, l, r)`:

- Apply pending increment to `tree[idx]`
- Pass increment to children if node is not a leaf
- Clear current `lazy[idx]`

## Complexity

- Build: $O(N)$
- Range add update: $O(\log N)$
- Range sum query: $O(\log N)$
- Space: $O(4N)$ for tree + $O(4N)$ for lazy

## Template Usage (Current File)

The implementation in [../../9_segment_tree/2_lazy_segment_tree.cpp](../../9_segment_tree/2_lazy_segment_tree.cpp) exposes:

- `LazySegTree st(a)`
- `st.rangeAdd(1, 0, n - 1, l, r, val)`
- `st.rangeSum(1, 0, n - 1, l, r)`

### Input Query Contract Used in `main()`

- `type = 1 l r val` means add `val` to each element in `[l, r]`
- `type = 2 l r` means print sum on `[l, r]`

### Minimal Usage Snippet

```cpp
vector<long long> a = {2, 4, 1, 3, 5};
int n = (int)a.size();
LazySegTree st(a);

st.rangeAdd(1, 0, n - 1, 1, 3, 10);       // +10 on indices 1..3
cout << st.rangeSum(1, 0, n - 1, 0, 4);   // total sum
```

## How To Modify This Template

This version is "range add + range sum". For other combinations:

- Range assign + range sum: lazy should store assignment flags and override older updates.
- Range add + range min/max: node value and merge logic must change.
- Two update types together: define clear composition priority rules.

## Common Pitfalls

- Not calling `push()` before using children.
- Wrong lazy composition logic.
- Forgetting segment length factor `(r - l + 1)` for sum updates.
- Using `int` when values can overflow; prefer `long long`.

[View Full C++ Implementation](../../9_segment_tree/2_lazy_segment_tree.cpp)
