# Divisors / Factors of a Number

Finds all divisors of a number $N$ by iterating up to $\sqrt{N}$. If $i$ divides $N$, then both $i$ and $N/i$ are divisors.

### Core Concept
* **Time Complexity:** $O(\sqrt{N})$.
* **Space Complexity:** $O(\sqrt{N})$ divisors.

### Core Logic
```cpp
vector <int> factors;
for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
        factors.push_back(i);
        if (i != n / i) factors.push_back(n / i);
    }
}
```

[View Full C++ Implementation](../../2_math/7_factors_of_number.cpp)
