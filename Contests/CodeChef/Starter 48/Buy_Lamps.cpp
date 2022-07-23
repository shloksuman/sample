#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int costt(int n, int k , int x, int y){
    int mincost = k*x + (n-k)*min(x,y);
    return mincost;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,k,x,y;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k>>x>>y;
        cout<<costt(n,k,x,y)<<endl;
    }
return 0;
}