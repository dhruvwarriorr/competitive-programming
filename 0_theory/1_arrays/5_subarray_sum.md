# Subarray Sum Equals K

Finds the count of subarrays whose elements sum up to a target $K$. It uses a prefix sum running value along with a hash map to count how many times a prefix sum value of $(\text{currSum} - K)$ has been seen so far.

### Core Concept
* **When to use:** Counting or finding subarrays satisfying a exact sum condition.
* **Time Complexity:** $O(N)$ on average (hash map operations are $O(1)$).
* **Space Complexity:** $O(N)$ to store prefix frequencies.

### Core Logic
If $\text{prefix}[i] - \text{prefix}[j] = K$, then the subarray $A[j+1 \dots i]$ has a sum equal to $K$.

```cpp
map <int, int> mp;
mp[0] = 1;
int sum = 0, cnt = 0;
for (int x : arr) {
    sum += x;
    cnt += mp[sum - k];
    mp[sum]++;
}
```

[View Full C++ Implementation](../../1_arrays/5_subarray_sum.cpp)
