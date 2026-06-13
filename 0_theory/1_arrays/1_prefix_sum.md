# Prefix Sum Array (1D)

A prefix sum array precomputes the sum of elements from the beginning of the array up to each index. This allows range sum queries $[L, R]$ to be answered in $O(1)$ time after an initial $O(N)$ precomputation.

### Core Concept
* **When to use:** When you need to perform multiple query operations asking for the sum of elements in a range $[L, R]$.
* **Time Complexity:** $O(N)$ precomputation, $O(1)$ per query.
* **Space Complexity:** $O(N)$ to store the prefix sums.

### Core Logic
$$\text{prefix}[i] = \text{prefix}[i-1] + A[i]$$
$$\text{sum}(L, R) = \text{prefix}[R] - \text{prefix}[L-1] \quad (\text{with } \text{prefix}[-1] = 0)$$

```cpp
vector <int> prefix(n);
prefix[0] = arr[0];
for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}
// Query: rangeSum = prefix[R] - (L > 0 ? prefix[L - 1] : 0);
```

[View Full C++ Implementation](../../1_arrays/1_prefix_sum.cpp)
