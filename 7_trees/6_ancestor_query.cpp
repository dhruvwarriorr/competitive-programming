#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int inTime[N];  
int outTime[N];

bool isAncestor(int x, int y)  
{  
    return inTime[x] <= inTime[y] && outTime[y] <= outTime[x];  
}

int main() {

    inTime[1] = 0;
    outTime[1] = 10;
    inTime[2] = 2;
    outTime[2] = 5;

    if (isAncestor(1, 2)) cout << "Yes\n";
    else cout << "No\n";
    }