#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // map to store frequency of prefix sums
    unordered_map<int, int> mp;

    // base case: prefix sum 0 occurs once
    // this handles subarrays starting from index 0
    mp[0] = 1;

    int sum = 0;   // running prefix sum
    int cnt = 0;   // number of subarrays with sum = k

    for (int x : arr) {
        sum += x;   // add current element to prefix sum

        // if (sum - k) existed before,
        // it means there is a subarray ending here with sum = k
        if (mp.find(sum - k) != mp.end()) {
            cnt += mp[sum - k];
        }

        // store current prefix sum frequency
        mp[sum]++;
    }

    // final answer
    cout << cnt << "\n";
}

// sum : keeps track of the prefix sum up to current index

// mp : stores frequency of each prefix sum seen so far
// mp[s] means: how many times prefix sum = s has occurred

// if (sum - k) exists in map,
// it means there are subarrays ending at current index with sum = k

// cnt : total number of subarrays whose sum is equal to k