# Segment Tree (Point Update + Range Query)

A binary tree over array ranges. It answers many online range queries mixed with point updates.

## Why Segment Tree

Answering each range query by scanning is $O(N)$ in the worst case. With a segment tree:

- Build once in $O(N)$
- Range query in $O(\log N)$
- Point update in $O(\log N)$

## Core Idea

Each node stores the answer for one segment `[l, r]`.

- Root stores the full range `[0, n-1]`
- Left child stores `[l, mid]`, right child stores `[mid+1, r]`
- A node is `merge(left, right)` of its children

## Complexity

- Build: $O(N)$
- Point update: $O(\log N)$
- Range query: $O(\log N)$
- Space: $O(N)$ (array of size $2^{\lceil \log_2 (2N) \rceil}$)

## Template Usage (Current File)

[../../9_segment_tree/1_segment_tree.cpp](../../9_segment_tree/1_segment_tree.cpp) is a **generic template**: `SegTree<Node, Update>`. To solve a new problem you only edit `Node` (what a segment stores + how two merge) and `Update` (how a point changes). The `_build`, `_update`, `_query` helpers are marked *Never change this*.

| Piece | Role |
| :-- | :-- |
| `Node()` | Identity element (returned for out-of-range segments) |
| `Node(v)` | Leaf built from an array value |
| `Node::merge(l, r)` | Combine two children |
| `Update::apply(node)` | Apply the update to a leaf |
| `make_update(pos, val)` | Public point update |
| `make_query(l, r)` | Public range query |

### Input Contract Used in `main()`

- `n q`, then the array
- `1 pos val` sets `a[pos] = val`
- `2 l r` prints the sum of `a[l..r]` (0-based, inclusive)

### Minimal Usage Snippet

```cpp
vector<long long> a = {5, 1, 3, 7, 2};
SegTree<Node1, Update1> st(a.size(), a);

st.make_update(2, 10);                   // a[2] = 10
cout << st.make_query(1, 3).val;         // sum(1..3) = 1 + 10 + 7
```

## How To Convert This Template

| Goal | `Node()` identity | `merge` |
| :-- | :-- | :-- |
| Sum | `0` | `l + r` |
| Min | `LLONG_MAX` | `min(l, r)` |
| Max | `LLONG_MIN` | `max(l, r)` |
| XOR | `0` | `l ^ r` |
| GCD | `0` | `gcd(l, r)` |

To store more (for example max-subarray-sum) add fields to `Node` and combine them in `merge`.

## Common Pitfalls

- 0-based vs 1-based mismatch between input and the tree.
- Wrong identity element in `Node()` (breaks the no-overlap case).
- Overflow for large sums: keep `long long`.
- For plain prefix sums with point add, a [Fenwick tree](3_fenwick_tree.md) is shorter and faster.

[View Full C++ Implementation](../../9_segment_tree/1_segment_tree.cpp)
