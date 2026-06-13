#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int, int> mp = {{1, 5}, {2, 3}, {3, 8}};

    // move to vector  
    vector<pair<int, int>> v(mp.begin(), mp.end());

    // sort by value using lambda  
    sort(v.begin(), v.end(), [](const pair<int,int> &a, const pair<int,int> &b) {  
        return a.second < b.second;  // ascending by value  
    });

    for (auto &p : v) {
        cout << p.first << ": " << p.second << "\n";
    }
    }