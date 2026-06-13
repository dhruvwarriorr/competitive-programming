# Lowest Set Bit Position

Finds the 1-based index position of the lowest set bit.

### Core Concept
* **Time Complexity:** $O(B)$ where $B$ is the position of the lowest set bit.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int pos = 1;
while ((n & 1) == 0) {
    n = n >> 1;
    pos++;
}
```

[View Full C++ Implementation](../../5_bit_manipulation/2_lowest_set_bit_position.cpp)
