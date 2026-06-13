# Sliding Window Technique

A subsegment of the array of size $K$ (fixed window) or variable size is maintained. As the window "slides" right, elements entering on the right are added, and elements leaving on the left are subtracted.

### Core Concept
* **When to use:** Computing contiguous range metrics (min, max, sum) of a specific length or variable size window.
* **Time Complexity:** $O(N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int currSum = 0;
for (int i = 0; i < k; i++) currSum += arr[i];
int maxSum = currSum;
for (int i = k; i < n; i++) {
    currSum += arr[i] - arr[i - k];
    maxSum = max(maxSum, currSum);
}
```

[View Full C++ Implementation](../../1_arrays/7_sliding_windows.cpp)
