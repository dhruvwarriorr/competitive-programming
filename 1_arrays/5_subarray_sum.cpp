#include <bits/stdc++.h>
using namespace std;

// Counts number of subarrays with sum = K
int countSubarrays(const vector<int>& arr, int k) {
    map<int,int> mp;
    mp[0] = 1;
    int sum = 0, cnt = 0;

    for (int x : arr) {
        sum += x;
        cnt += mp[sum - k];
        mp[sum]++;
    }
    return cnt;
}

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << countSubarrays(arr, k) << "\n";

}
