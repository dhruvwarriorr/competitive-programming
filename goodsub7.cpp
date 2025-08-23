#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    vector <int> arr(n);
	    int count = 1;
	    int o;
	    
	    
	    for(int i = 0; i<n; i++) cin >> arr[i];
	    
	    if(arr[0] % 2 == 0) o = 0;
	    else o = 1;
	    
	    for(int i = 1; i<n; i++) {
	        
	       if(o == 0){
	           if(arr[i] % 2 == 0) continue;
	           else {
	               count++;
	               o = 1;
	           }
	       } 
	       else{
	           if(arr[i] % 2 == 1) continue;
	           else {
	               count++;
	               o = 0;
	           }
	       }
	       
	    }
	    
	    cout << count << endl;
	    
	}

}