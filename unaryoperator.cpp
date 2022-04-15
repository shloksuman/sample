#include<iostream>
using namespace std;
int main(){
    int g=10 ;
    int a=3;
    int b=2;
    int c=6;
    int d;
    int e ;
    int f;
    int h;
    d= a++ + ++a ;                // 3+5 = 8 a=5
    f= --c - c-- ;                // 5-5 = 0 c= 4
    e= a+ b + c - --c + ++b ;     // 5+2+4 - 3 + 3 = 11 b=3  c =3
    h= --g - --g  ;
    cout << d << endl;            // 8
    cout << e << endl;            // 11
    cout << f << endl;            // 0
    cout << a << endl;            // 5
    cout << b << endl;            // 3
    cout << c << endl;            // 4
    cout << h << endl;
    cout << g << endl;
    cout << g-- << endl;
return 0 ;
}