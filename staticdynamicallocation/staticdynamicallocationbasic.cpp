#include<iostream>
using namespace std;

int main(){

    int a=5 ;
    int& j= a ;
    cout << "a = " << a << endl ;
    cout << "j = " << j << endl ;
    cout << "++a = " << ++a << endl ;
    cout << "++j = " << ++j << endl ;

    cout << "Enter the size of the array : " ;
    int n ;
    cin >> n;
    int* arr = new int[n] ;

    cout  << "Enter the elements : " ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << "The elements are : " ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << endl;
    }

    delete []arr ;

return 0;
}