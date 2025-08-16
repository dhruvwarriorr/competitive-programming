#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    int large = 0;
	    int num = 0;
	    
	    for(int i = 0; i<n; i++) {
	    cin >> arr[i];
	    if (arr[i] > large) {
	        large = arr[i];
	        num = i+1;
	    }
	    
	    }
	    
	    cout << num << endl;
	    
	    
	}

}