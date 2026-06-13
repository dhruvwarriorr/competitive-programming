# Sort Map by Values

By default, C++ `std::map` is ordered by its keys. To sort elements by their values, we copy the map elements into a vector of pairs and sort using a custom lambda comparator.

### Core Concept
* **When to use:** When you need key-value frequency tables ordered by occurrences/values rather than key order.
* **Time Complexity:** $O(N \log N)$ to copy and sort.
* **Space Complexity:** $O(N)$ for the auxiliary vector.

### Core Logic
```cpp
vector <pair <int, int>> v(mp.begin(), mp.end());
sort(v.begin(), v.end(), [](const pair <int, int> &a, const pair <int, int> &b) {  
    return a.second < b.second; // Sort ascending by value
});
```

[View Full C++ Implementation](../../8_misc/2_sort_map_by_values.cpp)
