#include <bits/stdc++.h>
using namespace std;

long long maxsubarraysum(int arr[], int n) {
    long long sum = 0;
    long long ans = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        ans = max(ans, sum);

        if (sum < 0) {
            sum = 0;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxsubarraysum(arr, n) << "\n";
}