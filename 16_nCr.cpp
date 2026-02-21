#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    long long f = 1;

    for (int i = 1; i <= n; i++) f *= i;

    return f;
}

long long nCr(int n, int r) {
    if (r > n) return 0;
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {

    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << "\n";
    return 0;
}