# Count Set Bits (Brian Kernighan's Algorithm)

Counts the number of set bits in an integer in $O(\text{set bits count})$ time by repeatedly clearing the lowest set bit.

### Core Concept
* **Time Complexity:** $O(\text{set bits count})$ where each iteration clears the rightmost set bit.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
int cnt = 0;
while (n > 0) {
    n = n & (n - 1);
    cnt++;
}
```

[View Full C++ Implementation](../../5_bit_manipulation/1_count_the_set_bits.cpp)
