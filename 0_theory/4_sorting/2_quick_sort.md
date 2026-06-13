# Quick Sort

An in-place, divide-and-conquer sorting algorithm. It picks an element as a pivot and partitions the given array around the picked pivot such that elements smaller than the pivot are on the left, and elements greater are on the right.

### Core Concept
* **When to use:** General internal sorting; has excellent cache locality.
* **Time Complexity:** $O(N \log N)$ average-case, $O(N^2)$ worst-case (if pivot selection is poor).
* **Space Complexity:** $O(\log N)$ auxiliary space for call stack.

### Core Logic
```cpp
void quickSort(vector <int> &arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition_array(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
```

[View Full C++ Implementation](../../4_sorting/2_quick_sort.cpp)
