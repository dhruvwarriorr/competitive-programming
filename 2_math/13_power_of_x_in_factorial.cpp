#include <bits/stdc++.h>
using namespace std;

int power_in_factorial(int n, int p) {  
    int cnt = 0;  
      
    while (n > 0) {  
        n /= p;  
        cnt += n;  
    }  
      
    return cnt;  
}

int main() {

    int n, p;
    if (cin >> n >> p) {
        cout << power_in_factorial(n, p) << "\n";
    }
    }