#include<iostream>
#include<queue>
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

Node* buildTree(){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    //base case
    if(data == -1){
        return NULL;
    }

    //step A, B and C
    Node* root = new Node(data);
    cout<<"Enter data for left part of "<<data<<endl;
    root->left = buildTree(); //recursive call
    cout<<"Enter data for right part of "<<data<<endl;
    root ->right = buildTree();  //recursive call

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    //initially
    q.push(root);
    //then remove the root

    while (!q.empty()){
        //A
        Node* temp = q.front();
        //B
        q.pop();
        //C
        cout<<temp->data<<" ";
        //D
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}


int main()
{

    Node* root = NULL;
    root = buildTree();
    levelOrderTraversal(root);
return 0;
}