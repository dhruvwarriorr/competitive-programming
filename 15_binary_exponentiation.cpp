#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long expo(long long a, long long b) {
    
    if (b == 0) return 1;

    long long ans = expo(a, b / 2);
    ans = (ans * ans) % MOD;

    if (b & 1) {
        ans = (ans * a) % MOD;
    }

    return ans;
}

int main() {
    

    long long a, b;
    cin >> a >> b;

    cout << expo(a, b) << "\n";

    return 0;
}