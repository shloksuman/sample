#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    
    // int mid=(start+end)/2; this code can overflow
    int mid= start/2 + end/2 ;

    while (start<=end)
    {
        int midElement= arr[mid];

        if(midElement==target){
            return mid;
        }

        if(target< midElement){
            end= mid-1;
        }
        else {
            start=mid+1;
        }

        mid = (start+ end)/2;
    }

    return -1 ;
    
}

int main(){
    int arr[]= { 2, 4,6 ,8 ,9,11 ,23} ;
    int n=7 ;
    int target=23 ;

    cout<<binarysearch(arr , n , target) << endl; //RETURNS INDEX OF THE TARGET
    //     cout << "Element found" << endl;
    // }
    // else {
    //     cout << "Element not found" << endl;
    // }
return 0;
}