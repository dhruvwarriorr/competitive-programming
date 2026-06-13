#include <bits/stdc++.h>
using namespace std;

// 0-based suffix sum
vector <long long> getSuffixSum0Based(int n, const vector <long long> &a) {
    vector <long long> sfx(n + 1, 0);
    for(int i = n - 1; i >= 0; i--){
        sfx[i] = sfx[i + 1] + a[i];
    }
    return sfx;
}

// 1-based suffix sum
vector <long long> getSuffixSum1Based(int n, const vector <long long> &a) {
    vector <long long> sfx(n + 2, 0);
    for(int i = n; i >= 1; i--) {
        sfx[i] = a[i - 1] + sfx[i + 1];
    }
    return sfx;
}

int main() {

    int n;
    cin >> n;

    vector <long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector <long long> sfx = getSuffixSum0Based(n, a);
    for (int i = 0; i < n; i++) {
        cout << sfx[i] << " ";
    }
    cout << "\n";

}
