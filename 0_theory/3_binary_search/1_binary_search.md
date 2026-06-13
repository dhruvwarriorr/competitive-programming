# Binary Search

Finds the position of a target value within a sorted array. It compares the target value to the middle element of the array; if they are unequal, the half in which the target cannot lie is eliminated and the search continues on the remaining half.

### Core Concept
* **When to use:** On sorted arrays to check existence or find indexes.
* **Time Complexity:** $O(\log N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int low = 0, high = a.size() - 1;
while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] == target) return mid;
    else if (a[mid] < target) low = mid + 1;
    else high = mid - 1;
}
```

[View Full C++ Implementation](../../3_binary_search/1_binary_search.cpp)
