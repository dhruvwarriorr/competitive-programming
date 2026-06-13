#include <bits/stdc++.h>
using namespace std;

vector <int> sievespf(int n) {
    vector <int> spf(n + 1);

    for (int i = 0; i <= n; i++)
        spf[i] = i;

    for(int i = 2; i * i <= n; i++) {
        if(spf[i] == i) {           // i is prime
            for(int j = i * i; j <= n; j += i) {
                if(spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    return spf;
}

int main() {

    int n;
    cin >> n;

    vector <int> spf = sievespf(n);
    for (int i = 1; i <= n; i++) {
        cout << "spf(" << i << ") = " << spf[i] << "\n";
    }

}
