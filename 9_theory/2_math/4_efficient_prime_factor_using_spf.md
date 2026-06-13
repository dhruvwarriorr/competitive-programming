# Efficient Prime Factorization using SPF

Uses the precomputed SPF array to factorize any number $X$ in logarithmic time by repeatedly dividing $X$ by its SPF until it becomes 1.

### Core Concept
* **When to use:** Factorizing multiple numbers up to $10^6$ dynamically.
* **Time Complexity:** $O(\log X)$ per factorization query.
* **Space Complexity:** $O(1)$ query time space.

### Core Logic
```cpp
vector <pair <int, int>> ans;
while (x != 1) {
    int prime = spf[x];
    int cnt = 0;
    while (x % prime == 0) {
        cnt++;
        x /= prime;
    }
    ans.push_back({prime, cnt});
}
```

[View Full C++ Implementation](../../2_math/4_efficient_prime_factor_using_spf.cpp)
