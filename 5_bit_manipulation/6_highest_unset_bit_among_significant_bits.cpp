#include <bits/stdc++.h>
using namespace std;

int highestUnsetBit(int n) {
    int pos = 0;
    int ans = -1;

    while (n) {
        if ((n & 1) == 0)
            ans = pos;

        pos++;
        n >>= 1;
    }
    return ans;
}

int main() {

    int n;
    cin >> n;

    cout << highestUnsetBit(n) << "\n";

}
