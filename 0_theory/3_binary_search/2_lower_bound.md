# Lower Bound

Finds the index of the first element in a sorted array that is greater than or equal to a target value.

### Core Concept
* **When to use:** Finding insertion points or matching range queries.
* **Time Complexity:** $O(\log N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int low = 0, high = a.size() - 1, ans = a.size();
while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] >= target) {
        ans = mid;
        high = mid - 1;
    } else {
        low = mid + 1;
    }
}
```

[View Full C++ Implementation](../../3_binary_search/2_lower_bound.cpp)
