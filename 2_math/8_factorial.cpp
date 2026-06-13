#include <bits/stdc++.h>
using namespace std;

// Iterative factorial calculation
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Prefilled precomputed factorial values
const int MAXN = 1e5 + 5;
long long precomputedFact[MAXN];

void computeFactorials(int N) {
    precomputedFact[0] = 1;
    for(int i = 1; i <= N; i++) {
        precomputedFact[i] = precomputedFact[i - 1] * i;
    }
}

int main() {

    int n;
    cin >> n;

    cout << factorial(n) << "\n";

}
