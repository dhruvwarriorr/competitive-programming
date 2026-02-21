#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;
    bool found = false;

    while (l < r) {
        int sum = arr[l] + arr[r];

        if (sum == target) {
            found = true;
            break;
        }
        else if (sum < target) {
            l++;  
        }
        else {
            r--;
        }
    }

    if (found) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
}