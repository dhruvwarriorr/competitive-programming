# Highest Unset Bit Among Significant Bits

Identifies the position of the highest unset bit that lies below the most significant set bit (MSB).

### Core Concept
* **Time Complexity:** $O(\log N)$ where we iterate up to the MSB.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int highestUnsetBit(int n) {
    int pos = 0, ans = -1;
    while (n) {
        if ((n & 1) == 0) ans = pos;
        pos++;
        n >>= 1;
    }
    return ans;
}
```

[View Full C++ Implementation](../../5_bit_manipulation/6_highest_unset_bit_among_significant_bits.cpp)
