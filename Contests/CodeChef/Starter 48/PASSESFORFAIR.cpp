#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void fairpass(int n , int k){
    if(n+1>k){
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t ; //test case
	int n , k ; // n friends k passes
	cin >> t;
	while(t--){ 
	    cin >> n >> k;
	    fairpass(n,k) ;
	}
	
	return 0;
}
