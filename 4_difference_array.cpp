#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> diff(n + 1, 0);

    int l, r, x;
    cin >> l >> r >> x;

    diff[l] += x;
    diff[r + 1] -= x;

    vector<int> arr(n, 0);
    arr[0] = diff[0];

    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] + diff[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}