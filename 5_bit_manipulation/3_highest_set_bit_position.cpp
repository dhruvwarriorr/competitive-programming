#include <bits/stdc++.h>
using namespace std;

int highestSetBitPos(int n) {
    int pos = -1; // 0 based
    while (n > 0) {
        pos++;
        n >>= 1;
    }
    return pos;
}

int main() {

    int n;
    cin >> n;

    cout << highestSetBitPos(n) << "\n";

}
