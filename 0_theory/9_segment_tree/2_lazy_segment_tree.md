# Lazy Segment Tree (Range Update + Range Query)

Used when range updates are frequent. Instead of touching every element of `[l, r]`, we store the pending update on the covering nodes and push it down only when needed.

## Why Lazy Propagation

- Without it a range update costs $O(N)$.
- With it both range update and range query are $O(\log N)$.

## Core Idea

Each node keeps its own (already correct) answer plus a **pending update** for its children.

- `lazy[idx]` says node `idx` has an update its children have not received.
- `_apply(idx, l, r, u)` applies `u` to the node immediately and, if it is not a leaf, folds `u` into the pending update via `combine`.
- `_pushdown(idx, l, r)` hands the pending update to both children and clears it. It is called before descending into children.

## Complexity

- Build: $O(N)$
- Range update: $O(\log N)$
- Range query: $O(\log N)$
- Space: $O(N)$ for `tree`, `lazy` and `updates`

## Template Usage (Current File)

[../../9_segment_tree/2_lazy_segment_tree.cpp](../../9_segment_tree/2_lazy_segment_tree.cpp) is a **generic template** `LazySGT<Node, Update>`. Edit only `Node` and `Update`:

| Piece | Role |
| :-- | :-- |
| `Node()` / `Node(v)` / `merge(l, r)` | Identity, leaf, and combine of two children |
| `Update()` | Identity update (no change) |
| `Update::apply(node, l, r)` | Apply to a node covering `[l, r]` (use the length `r - l + 1` for sums) |
| `Update::combine(newer, l, r)` | Compose a newer update on top of the pending one |
| `make_update(l, r, val)` | Public range update |
| `make_query(l, r)` | Public range query |

The shipped example is **range assign + range sum**.

### Input Contract Used in `main()`

- `n q`, then the array
- `1 l r val` assigns `val` to every element in `[l, r]`
- `2 l r` prints the sum of `a[l..r]` (0-based, inclusive)

### Minimal Usage Snippet

```cpp
vector<long long> a = {2, 4, 1, 3, 5};
LazySGT<Node1, Update1> st(a.size(), a);

st.make_update(1, 3, 10);                // a[1..3] = 10
cout << st.make_query(0, 4).val;         // 2 + 10 + 10 + 10 + 5
```

## Converting To Other Update Types

- **Range add + range sum:** `apply`: `a.val += val * (r - l + 1)`; `combine`: `val += newer.val`.
- **Range add + range min/max:** `apply`: `a.val += val`; `combine`: `val += newer.val`.
- **Assign + add together:** store a flag for "assign" and define clear priority in `combine` (a newer assign wipes older adds; a newer add adds onto an older assign).

## Common Pitfalls

- Forgetting to push down before recursing into children.
- Wrong `combine` order (the newer update must win/compose on top of the older one).
- Forgetting the segment length factor for sum updates.
- Using `int` when values overflow; prefer `long long`.

[View Full C++ Implementation](../../9_segment_tree/2_lazy_segment_tree.cpp)
