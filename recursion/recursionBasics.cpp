#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==1){
        return 1 ;
    }
    // int smallerAns = factorial(n-1);
    // int biggerAns = n * smallerAns ;
    // return biggerAns ;
    return n*factorial(n-1) ;
}

int main(){
    int n;
    cout << "Enter the value of n : " ;
    cin>> n ;
    cout << "The factorial is : " << factorial(n) << endl;
return 0;
}