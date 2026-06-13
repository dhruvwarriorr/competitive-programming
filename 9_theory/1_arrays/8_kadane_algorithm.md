# Kadane's Algorithm

Computes the maximum subarray sum in a single pass. It maintains a running sum of the current subarray; if the running sum drops below $0$, it resets the sum to $0$ (starting a new subarray).

### Core Concept
* **When to use:** Finding the maximum contiguous sum in an array containing negative numbers.
* **Time Complexity:** $O(N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
$$\text{localMax}[i] = \max(A[i], \text{localMax}[i-1] + A[i])$$

```cpp
long long sum = 0, ans = LLONG_MIN;
for (int i = 0; i < n; i++) {
    sum += arr[i];
    ans = max(ans, sum);
    if (sum < 0) sum = 0;
}
```

[View Full C++ Implementation](../../1_arrays/8_kadane_algorithm.cpp)
