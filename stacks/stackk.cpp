#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation of stack
    stack<int> st;

    //insertion
    st.push(5);
    st.push(7);
    st.push(9);
    //print the size
    cout << "Size = " << st.size() << endl;

    //check if empty or not
    cout << "Empty or not = " << st.empty() << endl;

   //ELEMENT AT TOP
    cout << "Top element = " <<  st.top() << endl;
   
   
   //remove
    st.pop() ;
   
    cout << "POP FUNCTION CALLED!!!" << endl;

    cout << "Now Top element = " <<  st.top() << endl;

    // int d= INT16_MIN;
    // cout << d << endl;


    



return 0;
}