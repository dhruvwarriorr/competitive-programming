#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefix(n);
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int l, r;
    cin >> l >> r;

    int rangesum;

    if (l == 0) {
        rangesum = prefix[r];
    } else {
        rangesum = prefix[r] - prefix[l - 1];
    }

    cout << rangesum << "\n";
}