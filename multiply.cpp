#include<iostream>
using namespace std ;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin) ;
        freopen("output.txt" , "w" , stdout) ;
     
    #endif
    cout <<"Enter your number :" ;
    int a , b,c;
    cin>>a ; 
    cout <<"\n \n Enter your number :" ;
    cin>>b ;
    c= a*b ;
    cout <<"\n a *b  :" << c ;
    return 0;
}