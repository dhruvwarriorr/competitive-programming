#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int M = 1e9 + 7;

int binpow(int a, int b) {
    int ans = 1;
    while(b){
        if(b&1){
            ans = (1LL*ans*a)%MOD;
        }
        a = (1LL*a*a)%MOD;
        b >>= 1;
    }
    return ans;
}

int binpowRecur(int a, int b) {
    if(b == 0) return 1;
    int res = binpowRecur(a, b / 2);
    if(b & 1) {
        return (a * ((1LL * res * res) % M)) % M;
    }  
    else {
        return (1LL * res * res) % M;
    }  
}

int main() {

    int a, b;
    if (cin >> a >> b) {
        cout << binpow(a, b) << "\n";
    }
    }