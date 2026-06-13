# Sieve of Eratosthenes

An ancient, efficient algorithm for finding all prime numbers up to a limit $N$. It starts by marking all numbers as prime, and then repeatedly marks the multiples of each prime starting from $2$ as composite.

### Core Concept
* **Time Complexity:** $O(N \log \log N)$.
* **Space Complexity:** $O(N)$ boolean array.

### Core Logic
```cpp
vector <bool> isPrime(n + 1, true);
isPrime[0] = isPrime[1] = false;
for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
        for (int j = i * i; j <= n; j += i)
            isPrime[j] = false;
    }
}
```

[View Full C++ Implementation](../../2_math/1_sieve_of_eratosthenes.cpp)
