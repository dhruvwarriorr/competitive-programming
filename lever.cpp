#include <bits/stdc++.h>
using namespace std;

int main()
{
  	int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int it = 0;

        for (int  i = 0; i < n; i++) cin >> a[i];
        for (int  i = 0; i < n; i++) cin >> b[i];

        while (true) {
            bool p1 = false;

            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    a[i]--;
                    p1 = true;
                    break;
                }
            }

            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i]++;
                    break; 
                }
            }

            it++;

            if (!p1) break; 
        }

        cout << it << endl;

        
    }
}

