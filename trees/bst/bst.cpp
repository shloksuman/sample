#include<iostream>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;

        Node(int d) {
            this->data = d;
            left= NULL;
            right= NULL;

        }

};

Node* buildBST(Node* root, int data) {
    if(root == NULL){
        Node* temp = new Node(data);
    }
}

void bst(Node* &root){

    cout << "Enter the value for root node : " << endl;
    int data;
    cin>>data;

    while(data!= -1){
        root = buildBST(root,data);
        cin>> data;
    }
}


int main(){

return 0;
}