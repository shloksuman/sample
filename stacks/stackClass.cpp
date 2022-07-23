#include<iostream>
using namespace std;

class Stack {
    public:
    int *arr;
    int top;
    int size;

    //constructor definition
    Stack(int size) {
        arr = new int(size) ;   //
        top = -1 ;
        this->size = size ;
    }

    void push(int data) {
        top++;
        arr[top]=data ;
    }

    void pop() {
        top--;
    }

    int getSize() {
        return this->size ;
    }

    bool isEmpty() {
        if(top==-1)
            return true ;
        else
            return false;
    }

    int getTop() {
        return arr[top] ;
    }

};


int main(){

    //create a stack with size 5
    Stack* st = new Stack(5) ;

    st->push(3);
    st->push(5);
    st->push(7);
    st->push(9);
    st->push(11);

    cout << st->getSize() << endl;




return 0;
}