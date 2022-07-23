#include <iostream>
using namespace std;

void bags(){                    //【﻿Ｔｉｍｅ　ｃｏｍｐｌｅｘｉｔｙ　ｉｓ　Ｏ（１）】
    int n , k , m ;
    cin>> n >> k >> m ;
    int T = k*m ;
    cout << (n+T-1)/T << endl;
}

int main() {
	int t ;
	cin >> t ;
	while(t--) bags() ;
	return 0;
}
