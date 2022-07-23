#include<iostream>
using namespace std;

void createArr(int arr[], int size){
    cout << "Enter the elements of the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;                
    }
}

//PRINTING ARRAY
void printarray(int arr[], int size) {
    cout << "The array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl ;        
    }  
}

void rotateArray(int arr[], int n){
    while(n-2>=0){                      //BEWARE WHILE MAKING THE CONDITION... MAY LEAD TO SEGMENTATION FAULT IF SPECIFIED WRONG
        swap(arr[n-2], arr[n-1]);       //END SE SWAP KARNA HAI BAS AUR 
        n-- ;                           //N-- DECREMENT KARTE REHNAA HAI
    }
}

int main(){

    int arr[100];
    cout << "Enter the size of element : " ;
    int size;
    cin>>size;
    createArr(arr,size);
    cout << "After rotating the array by one position!!!!" << endl;
    rotateArray(arr,size);
    printarray(arr,size);

return 0;
}