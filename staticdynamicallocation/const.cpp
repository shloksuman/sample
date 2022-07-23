#include<iostream>
using namespace std;

int func(int a , int b=2 , int c = 5){
    return a+b+c ;
}

int main(){
    // const int a=3;
    // a++ ; 
    // cout << a ; //PRINTS ERRROR

    cout << func(3,10,20) ;

return 0;
}