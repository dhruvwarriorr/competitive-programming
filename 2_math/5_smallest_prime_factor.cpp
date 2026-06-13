#include <bits/stdc++.h>
using namespace std;

// Smallest prime factor of a single number
int spf(int n) {
    if (n <= 1) return n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return i;
    }
    return n;
}

int main() {

    int n;
    cin >> n;

    cout << spf(n) << "\n";

}
