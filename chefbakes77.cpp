#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
	// your code goes here
	int n,x,y;
	
	cin >> n >> x >> y;
	
	int car = y/x;
	
	int result = (n + car - 1) / car;
	
	cout << result;
}