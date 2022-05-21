#include<iostream>
using namespace std;

void sortedarray(int arr[], int size){
    int k=size-1;
    int countzero=0 , countone=0, counttwo=0 ;
    for(int i=0 ; i<size;i++){
        if (arr[i]==0){
            countzero++;
        }
        else if (arr[i]==1)
        {
            countone++;
        }
        else if(arr[i]==2) {
             counttwo++ ;
        }  
    }
    //printing sorted array 
    cout << "The sorted array is : " ;
    for(int j=0; j<countzero;j++){
        cout << 0 << " " ;
    }
    for(int m=0; m<countone;m++){
        cout << 1 << " " ;
    }
    for(int n=0; n<counttwo;n++){
        cout << 2 << " " ;
    }

}

int main(){
    cout << "Enter the size of the array : " ;
    int size;
    cin >> size ;
    int arr[size] ;
    cout << "Enter the elements of the array(only 0s , 1s and 2s) : " ;
    for(int i=0; i<size ; i++){
        cin >> arr[i] ;
    }

    sortedarray(arr,size);

    return 0;
}