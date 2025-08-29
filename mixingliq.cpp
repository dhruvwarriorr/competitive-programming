#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;

        int make = min(a,b/2);

       cout << make * 3 << endl;
    }
}