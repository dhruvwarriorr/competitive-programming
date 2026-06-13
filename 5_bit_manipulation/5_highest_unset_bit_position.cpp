#include <bits/stdc++.h>
using namespace std;

int lastUnsetBitIndex(int n) {
    for (int i = 31; i >= 0; i--) {
        if (((n >> i) & 1) == 0)
            return i;
    }
    return -1; // all bits are set (n == -1)
}

int main() {

    int n;
    cin >> n;

    cout << lastUnsetBitIndex(n) << "\n";

}
