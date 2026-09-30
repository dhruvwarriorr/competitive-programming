#include <bits/stdc++.h>
using namespace std;

// Extended Euclid  -  O(log min(a, b))
// Returns g = gcd(a, b) and finds x, y with a*x + b*y = g
long long extgcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

// Modular inverse of a mod m for ANY m (not only prime), -1 if gcd(a, m) != 1
long long modInverse(long long a, long long m) {
    long long x, y;
    long long g = extgcd(((a % m) + m) % m, m, x, y);
    if (g != 1) return -1;
    return ((x % m) + m) % m;
}

int main() {

    long long a, m;
    cin >> a >> m;

    cout << modInverse(a, m) << "\n";

}
