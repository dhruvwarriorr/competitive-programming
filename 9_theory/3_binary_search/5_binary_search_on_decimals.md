# Binary Search on Decimals

Used when the search space consists of floating-point values. Instead of `low <= high`, the search terminates after a fixed number of iterations (typically 60 to 100) or when `high - low < precision`.

### Core Concept
* **When to use:** Geometric computations, double division problems, or continuous function optimizations.
* **Time Complexity:** $O(\text{iterations})$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int iterations = 100;
for(int i = 0; i < iterations; i++) {
    double mid = (low + high) / 2;
    if (mid * mid <= x) {
        ans = mid;
        low = mid + precision;
    } else {
        high = mid - precision;
    }
}
```

[View Full C++ Implementation](../../3_binary_search/5_binary_search_on_decimals.cpp)
