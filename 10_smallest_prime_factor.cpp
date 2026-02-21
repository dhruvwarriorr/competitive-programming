#include <bits/stdc++.h>
using namespace std;

int spf(int n) {
    if (n <= 1) {
        return n;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return i;
        }
    }

    return n;
}

int main() {
    int n;
    cin >> n;

    cout << spf(n) << "\n";
}