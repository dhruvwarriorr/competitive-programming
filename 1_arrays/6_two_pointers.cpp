#include <bits/stdc++.h>
using namespace std;

// Works only for sorted arrays
bool twoSumSorted(const vector<int>& arr, int target) {
    int n = arr.size();
    if (n < 2) return false;
    int l = 0, r = n - 1;
    while (l < r) {
        int sum = arr[l] + arr[r];
        if (sum == target) return true;
        else if (sum < target) l++;
        else r--;
    }
    return false;
}

int main() {

    int n, target;
    if (cin >> n >> target) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if (twoSumSorted(arr, target)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    }