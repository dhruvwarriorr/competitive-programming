# Highest Unset Bit Position

Finds the highest bit position containing a zero by checking from the most significant bit (index 31 for 32-bit integers) down to 0.

### Core Concept
* **Time Complexity:** $O(32)$ or $O(1)$ constant time operations.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int lastUnsetBitIndex(int n) {
    for (int i = 31; i >= 0; i--) {
        if (((n >> i) & 1) == 0)
            return i;
    }
    return -1; // all bits are set
}
```

[View Full C++ Implementation](../../5_bit_manipulation/5_highest_unset_bit_position.cpp)
