#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(n + 1, 0);
        int freq1 = 0;
        int mfreq = 0;

        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            freq[p]++;
        }

        freq1 = freq[1];
        for (int a = 1; a <= n; a++) {
            mfreq = max(mfreq, freq[a]);
        }

        if (freq1 == n) { 
            cout << 0 << endl;
            continue;
        }
        if (mfreq == n) { 
            cout << 1 << endl;
            continue;
        }

        int o1 = n - freq1;          
        int o2 = 1 + (n - mfreq);  
        cout << min(o1, o2) << endl;
    }
}