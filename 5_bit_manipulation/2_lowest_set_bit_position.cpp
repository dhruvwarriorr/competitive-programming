#include <bits/stdc++.h>
using namespace std;

int lowestSetBitPos(int n) {  
    if (n == 0) return -1;
    int pos = 0; // 0 based index  
    while ((n & 1) == 0) {  
        n >>= 1;  
        pos++;  
    }  
    return pos;  
}

int main() {

    int n;
    if (cin >> n) {
        cout << lowestSetBitPos(n) << "\n";
    }
    }