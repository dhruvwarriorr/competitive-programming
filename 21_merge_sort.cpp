#include <bits/stdc++.h>
using namespace std;

void merge_arrays(vector<int> &arr, int left, int mid, int right) {
    
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> l(n1), r(n2);

    for (int i = 0; i < n1; i++) l[i] = arr[left + i];
    for (int i = 0; i < n2; i++) r[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) arr[k++] = l[i++];
        else arr[k++] = r[j++];
    }

    while (i < n1) arr[k++] = l[i++];
    while (j < n2) arr[k++] = r[j++];
}

void mergeSort(vector<int> &arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge_arrays(arr, left, mid, right);
}

int main() {
   
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int x : arr) cout << x << " ";
}