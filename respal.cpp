#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string a = "abc";
        string result = "";
        
        while (result.size() < n) result += a;
        
        result = result.substr(0, n);
            
        cout << result << endl;
        }
        
    }

