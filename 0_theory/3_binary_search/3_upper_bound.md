# Upper Bound

Finds the index of the first element in a sorted array that is strictly greater than a target value.

### Core Concept
* **Time Complexity:** $O(\log N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int low = 0, high = a.size() - 1, ans = a.size();
while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] > target) {
        ans = mid;
        high = mid - 1;
    } else {
        low = mid + 1;
    }
}
```

[View Full C++ Implementation](../../3_binary_search/3_upper_bound.cpp)
