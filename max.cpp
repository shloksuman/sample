#include<iostream>
using namespace std ;

int main(){
    int a,b ,c ;
    cin>>a>>b>>c;

    if(a>b)
        {
            if(a>c)
            cout<<"MAX " << a;
            else
            cout<<"MAX " << c;
        }
    else if(b>a)
    {
        if(b>c)
        cout <<"MAX " << b;
        else
        cout<<"MAX " << c ;
    }   
    return 0; 
}