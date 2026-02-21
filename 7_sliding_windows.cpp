#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currsum = 0;

    // sum of first window of size k
    for (int i = 0; i < k; i++) {
        currsum += arr[i];
    }

    int maxsum = currsum;

    
    for (int i = k; i < n; i++) {
        currsum += arr[i];       
        currsum -= arr[i - k];    
        maxsum = max(maxsum, currsum);
    }

    cout << maxsum << "\n";
}