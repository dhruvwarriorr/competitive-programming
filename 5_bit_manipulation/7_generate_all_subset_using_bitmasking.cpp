#include <bits/stdc++.h>
using namespace std;

void generateSubsets(const vector <int> &a) {
    int n = a.size();

    for (int mask = 0; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                cout << a[i] << " ";
            }
        }
        cout << '\n';
    }
}

int main() {

    int n;
    cin >> n;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    generateSubsets(a);

}
