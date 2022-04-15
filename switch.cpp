#include<iostream>
using namespace std;
int main(){
    float a, b;
    cout<<"Enter 2 numbers : " ;
    cin>>a>>b; 
    char op;
    cout<<"Enter operator : " ;
    cin>>op ;
    switch(op){
        case '+' :
        cout << "The sum is : " << a+b;
        break;
         case '-' :
        cout << "The difference is : " << a-b;
        break;
         case '*' :
        cout << "The product is : " << a*b;
        break; 
        case '/' :
        cout << "The quotient is : " << a/b ;
        break;
        default :
        cout<< "Enter another operator !" ;
        break;
    }
}