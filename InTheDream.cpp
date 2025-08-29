By dhruvwarriorr, contest: Codeforces Round 1046 (Div. 2), problem: (A) In the Dream, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        int f1 = a;
        int f2 = b;
        int s1 = c - a;
        int s2 = d - b;
        bool goal = true;
 
        {
            int ma = max(f1, f2);
            int mi = min(f1, f2);
            if (ma > (2 * (mi + 1))) goal = false;
        }
 
        {
            int ma = max(s1, s2);
            int mi = min(s1, s2);
            if (ma > (2 * (mi + 1))) goal = false;
        }
 
        if(goal) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
}