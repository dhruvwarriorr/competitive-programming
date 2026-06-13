# Highest Set Bit Position

Finds the 1-based index position of the most significant set bit (MSB).

### Core Concept
* **Time Complexity:** $O(\log N)$ where we shift the bits right until the number becomes zero.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int pos = 0;
while (n > 0) {
    n = n >> 1;
    pos++;
}
```

[View Full C++ Implementation](../../5_bit_manipulation/3_highest_set_bit_position.cpp)
