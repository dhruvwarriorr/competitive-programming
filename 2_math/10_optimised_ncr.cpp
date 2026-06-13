#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;
const int MOD = 1e9 + 7;

long long fact[MAXN + 5];
long long invfact[MAXN + 5];

long long binexp(long long a, long long b) {
    long long ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%MOD;
        }
        a = (a*a)%MOD;
        b >>= 1;
    }
    return ans;
}

void init() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++){
        fact[i] = fact[i - 1] * i % MOD;
    }

    invfact[MAXN] = binexp(fact[MAXN], MOD - 2);

    for (int i = MAXN - 1; i >= 0; i--){
        invfact[i] = invfact[i + 1] * (i + 1) % MOD;
    }  
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;  
}

int main() {

    init();
    int n, r;
    if (cin >> n >> r) {
        cout << nCr(n, r) << "\n";
    }
    }