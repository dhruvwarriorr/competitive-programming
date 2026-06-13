#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {  
    int cnt = 0;  
    while (n > 0) {  
        n = n & (n - 1);  // removes lowest set bit  
        cnt++;  
    }  
    return cnt;  
}

int main() {

    int n;
    if (cin >> n) {
        cout << countSetBits(n) << "\n";
    }
    }