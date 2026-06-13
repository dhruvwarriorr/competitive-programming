#include <bits/stdc++.h>
using namespace std;

int firstUnsetBitIndex(int n) {  
    int idx = 0;  
    while (n & 1) {  
        n >>= 1;  
        idx++;  
    }  
    return idx;  
}

int main() {

    int n;
    if (cin >> n) {
        cout << firstUnsetBitIndex(n) << "\n";
    }
    }