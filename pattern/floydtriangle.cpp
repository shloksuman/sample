#include<iostream>
using namespace std;
int main(){
    int row ;
    int count=1;
    cout << "enter the number of rows : " ;
    cin>>row;
    for(int i=1 ; i<=row;i++){
        for(int j=1;j<=i;j++){
            cout << count << " " ;
            count++;
        }
        cout << endl;
    }

    return 0;
}