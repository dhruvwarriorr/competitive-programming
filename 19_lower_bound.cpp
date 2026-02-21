#include <bits/stdc++.h>
using namespace std;

int lower_bound_index(const vector<int> &a, int target) {
    int l = 0, r = a.size();   // search space [l, r)

    while (l < r) {
        int mid = l + (r - l) / 2;

        if (a[mid] < target) l = mid + 1;
        else r = mid;
    }
    return l;   // first index where a[i] >= target
}

int main() {
   
    int n, target;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> target;

    int idx = lower_bound_index(a, target);

    cout << idx << "\n";

    return 0;
}