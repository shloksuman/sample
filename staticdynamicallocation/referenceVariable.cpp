#include<iostream>
using namespace std;

int main(){

    int a=5 ;
    int& j= a ;
    cout << "a = " << a << endl ;
    cout << "j = " << j << endl ;
    cout << "++a = " << ++a << endl ;
    cout << "++j = " << ++j << endl ;
    cout << "a = " << a << endl ;
    int* ptr = &a ;
    cout << ptr << endl ;
    cout << sizeof(ptr) << endl;


return 0;
}