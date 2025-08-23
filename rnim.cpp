#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    long long mod = 499122177LL; 
    while(t--){
        int n;
        cin >> n;
        bool num = false;
        for(int i = 0; i < n; ++i){
            int a;
            cin >> a;
            if(a >= 2) num = true;
        }
        if(!num){
            if(n % 2 == 1) cout << 1 << endl;
            else cout << 0 << endl;
        } else {
            cout << mod << endl;
        }
    }    
}
