# Generate Subsets using Bitmasking

Generates all $2^N$ subsets of an array in $O(N \cdot 2^N)$ time by using the binary representations of integers from $0$ to $2^N-1$ as index selection masks.

### Core Concept
* **Time Complexity:** $O(N \cdot 2^N)$.
* **Space Complexity:** $O(1)$ auxiliary query space.

### Core Logic
```cpp
void generateSubsets(const vector <int> &a) {
    int n = a.size();
    for (int mask = 0; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                cout << a[i] << " ";
            }
        }
        cout << '\n';
    }
}
```

[View Full C++ Implementation](../../5_bit_manipulation/7_generate_all_subset_using_bitmasking.cpp)
