#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool pos = true;
        int i = 0;
        int len = 0;

        while (i < n) {
            if(s[i] == '1') {
                int j = i;
                while (j<n && s[j]=='1') j++; 
                len = j-i;
                if (len < 3) pos = false;
                i = j;
            }else {
                i++;
            }
        }
        if(pos) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}