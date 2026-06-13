# Merge Sort

A stable, comparison-based, divide-and-conquer sorting algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.

### Core Concept
* **When to use:** When stability is required, or when sorting linked lists. It is also the basis for calculating inversion counts.
* **Time Complexity:** $O(N \log N)$ in best, average, and worst cases.
* **Space Complexity:** $O(N)$ auxiliary space for merging.

### Core Logic
```cpp
void mergeSort(vector <int> &arr, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge_arrays(arr, left, mid, right);
}
```

[View Full C++ Implementation](../../4_sorting/1_merge_sort.cpp)
