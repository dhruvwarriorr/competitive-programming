#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &a, int target) {

    int low = 0, high = a.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) return mid;
        else if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    

    int n, target;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> target;

    cout << binary_search(a, target) << "\n";
    return 0;
}