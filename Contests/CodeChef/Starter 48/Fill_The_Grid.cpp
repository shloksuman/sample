#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void solution(){
    int n,m;
    cin>>n>>m;
    if(n%2==0 && m%2==0){ cout << 0 << endl ; } //case 1 n even m even
    if(n%2==0 && m%2==1){ cout << n << endl ; } //case 2 n even m odd
    if(n%2==1 && m%2==0){ cout << m << endl ; } //case 3 n odd m even
    if(n%2==1 && m%2==1){ cout << n+m-1 << endl ; } //case 4 n odd m odd
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solution();
    }
return 0;
}