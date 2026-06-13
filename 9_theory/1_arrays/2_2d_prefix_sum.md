# 2D Prefix Sum Matrix

Extends the 1D prefix sum concept to a 2D grid. Each cell $(i, j)$ in the prefix matrix stores the sum of the subgrid from $(0, 0)$ to $(i, j)$.

### Core Concept
* **When to use:** When you need to query the sum of any rectangular subgrid defined by top-left $(L_1, R_1)$ and bottom-right $(L_2, R_2)$ in $O(1)$ time.
* **Time Complexity:** $O(N \cdot M)$ precomputation, $O(1)$ per query.
* **Space Complexity:** $O(N \cdot M)$.

### Core Logic
$$\text{pre}[i][j] = A[i][j] + \text{pre}[i-1][j] + \text{pre}[i][j-1] - \text{pre}[i-1][j-1]$$
$$\text{Query}(L_1, R_1, L_2, R_2) = \text{pre}[L_2][R_2] - \text{pre}[L_1-1][R_2] - \text{pre}[L_2][R_1-1] + \text{pre}[L_1-1][R_1-1]$$

```cpp
pre[i][j] = a[i][j];
if (i > 0) pre[i][j] += pre[i - 1][j];
if (j > 0) pre[i][j] += pre[i][j - 1];
if (i > 0 && j > 0) pre[i][j] -= pre[i - 1][j - 1];
```

[View Full C++ Implementation](../../1_arrays/2_2d_prefix_sum.cpp)
