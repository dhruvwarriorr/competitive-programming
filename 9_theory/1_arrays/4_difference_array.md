# Difference Array

A difference array stores the differences between consecutive elements: $D[i] = A[i] - A[i-1]$. It allows offline range update operations (adding $X$ to all elements in $[L, R]$) to be done in $O(1)$ time. The final array can be reconstructed in $O(N)$ time by computing the prefix sum of the difference array.

### Core Concept
* **When to use:** When there are multiple range updates followed by a single query phase of the entire array.
* **Time Complexity:** $O(1)$ per update, $O(N)$ reconstruction.
* **Space Complexity:** $O(N)$.

### Core Logic
$$\text{Update}(L, R, X) \implies D[L] \leftarrow D[L] + X, \quad D[R+1] \leftarrow D[R+1] - X$$

```cpp
// Add X to range [L, R]
diff[L] += X;
diff[R + 1] -= X;
```

[View Full C++ Implementation](../../1_arrays/4_difference_array.cpp)
