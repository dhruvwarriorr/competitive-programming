#include <bits/stdc++.h>
using namespace std;

int lower_bound_index(vector <int> &a, int target) {
    int low = 0;
    int high = a.size() - 1;
    int ans = a.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] >= target) {
            ans = mid;      // possible answer
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {

    int n, target;
    cin >> n >> target;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << lower_bound_index(a, target) << "\n";

}
