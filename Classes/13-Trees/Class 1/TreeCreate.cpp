#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor create
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){ //recursion type
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    //base case
    if(data == -1){
        return NULL; //-1 to stop the node
    }

    //step A, B and C
    Node* root = new Node(data);
    cout<<"Enter data for left part of "<<data<<endl;
    root->left = buildTree(); //recursive call
    cout<<"Enter data for right part of "<<data<<endl;
    root ->right = buildTree();  //recursive call
    return root;
}


int main()
{

    Node* root = NULL;
    root = buildTree();
return 0;
}