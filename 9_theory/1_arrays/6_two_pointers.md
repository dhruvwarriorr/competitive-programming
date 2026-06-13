# Two Pointers Technique

Uses two index pointers that scan the array in a synchronized manner. Often, the pointers move in opposite directions (left starting at 0, right starting at $N-1$) or in the same direction to find pairs or sub-segments satisfying a condition.

### Core Concept
* **When to use:** Finding pairs in sorted arrays, merging sorted segments, or container partitioning.
* **Time Complexity:** $O(N)$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int l = 0, r = n - 1;
while (l < r) {
    int sum = arr[l] + arr[r];
    if (sum == target) return true;
    else if (sum < target) l++;
    else r--;
}
```

[View Full C++ Implementation](../../1_arrays/6_two_pointers.cpp)
