# Binary Search on Answers

Instead of searching over an array, binary search is applied over a range of possible answers $[L, R]$. A monotonic decision function `check(mid)` is used to determine if a candidate answer `mid` is valid.

### Core Concept
* **When to use:** When you need to minimize the maximum (or maximize the minimum) of a value, and a checker function can verify feasibility in polynomial time.
* **Time Complexity:** $O(\text{Cost of check} \cdot \log(\text{High} - \text{Low}))$.
* **Space Complexity:** $O(1)$.

### Core Logic
```cpp
while(low <= high){
    ll mid = low + (high - low) / 2;
    if(check(mid, a, k)){
        ans = mid;
        high = mid - 1; // Minimize the answer
    } else {
        low = mid + 1;
    }
}
```

[View Full C++ Implementation](../../3_binary_search/4_binary_search_on_answers.cpp)
