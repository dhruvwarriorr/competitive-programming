# Lowest Unset Bit Position

Finds the index of the first bit that is 0 from the right.

### Core Concept
* **Time Complexity:** $O(B)$ where $B$ is the position of the lowest unset bit.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int pos = 1;
while ((n & 1) != 0) {
    n = n >> 1;
    pos++;
}
```

[View Full C++ Implementation](../../5_bit_manipulation/4_lowest_unset_bit_position.cpp)
