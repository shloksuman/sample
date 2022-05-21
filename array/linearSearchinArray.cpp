#include <iostream>
using namespace std;

bool search(int arr[] , int size, int x){
    for(int i=0; i< size; i++){
        if(arr[i]==x){
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[100];
    cout << "Enter the size of the array : ";
    int n;
    cin >> n;

    // CREATION ON ARRAY

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // TAKEN ALL THE INPUTS
    }
    cout << "\nThe elements in the array are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i != n - 1)
        {
            cout << " || ";
        } // TAKEN ALL THE INPUTS
    }
    
    int x;
    cout << "\nEnter the element to be searched : " ;
    cin >> x;
    if(search(arr, n, x)){
        cout << "\nElement FOund!" <<endl;
    }
    else cout << "\nElement NOt Found!" << endl;

    return 0;
}