#include<iostream>
#include<stack>
using namespace std;

class Stack {

    public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        arr = new int[size];
        top= -1;
        this->size = size ;
    }

    void push(int data) {
        if(top == size-1){
            cout << "Stack overflow for element " << data << endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    
    void pop() {
        if(top == -1){
            cout << "Stack underflow.. matlab khaali hai Stack!!" << endl;
        }
        top--;
    }

    int getSize() {
        return this->size;
    }

    int getTop() {
        return arr[top];
    }



} ;

int main(){
    // stack<int> st;

    // st.push(5) ;
    // st.push(7) ;
    // st.push(9) ;

    // cout << st.size() << endl ;

    // cout << st.top() << endl;

    // st.pop() ;


    //create a stack with 
    int n;
    cin >> n;
    stack<int> s ;

    while(n--){
        int t;
        cin >> t;
        s.push(t);
    }

    while(!s.empty()) {
        cout << s.pop() << " ";
        s.pop();
    }
return 0;
}