#include <bits/stdc++.h>
using namespace std;

int power(int n, int x) {  
    int cnt = 0;  
    while (n % x == 0) {  
        n /= x;  
        cnt++;  
    }  
    return cnt;  
}

int main() {

    int n, x;
    if (cin >> n >> x) {
        cout << power(n, x) << "\n";
    }
    }