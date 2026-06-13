#include <bits/stdc++.h>
using namespace std;

// k - size of subarray
int maxSumSubarray(int arr[], int n, int k) {
    if (n < k) return -1;
    
    int currSum = 0;
    for (int i = 0; i < k; i++) currSum += arr[i];

    int maxSum = currSum;

    for (int i = k; i < n; i++) {
        currSum += arr[i];
        currSum -= arr[i - k];
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {

    int n, k;
    if (cin >> n >> k) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << maxSumSubarray(arr.data(), n, k) << "\n";
    }
    }