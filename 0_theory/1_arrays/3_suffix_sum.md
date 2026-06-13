# Suffix Sum Array

The reverse of the prefix sum. A suffix sum array precomputes the sum of elements from each index to the end of the array.

### Core Concept
* **When to use:** When querying range sums that extend to the end of the array, or in dynamic programming where suffix state transitions are required.
* **Time Complexity:** $O(N)$ precomputation, $O(1)$ per query.
* **Space Complexity:** $O(N)$.

### Core Logic
$$\text{sfx}[i] = \text{sfx}[i + 1] + A[i]$$

```cpp
vector <long long> sfx(n + 1, 0);
for(int i = n - 1; i >= 0; i--){
    sfx[i] = sfx[i + 1] + a[i];
}
```

[View Full C++ Implementation](../../1_arrays/3_suffix_sum.cpp)
