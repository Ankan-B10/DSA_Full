#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(){
        this -> data = 0;
        this -> next = NULL;
    }
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp-> data<<" "; // printing data
        temp = temp -> next; // go forward to next node
    }
}

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data); // create a newNode
    // step 2
    newNode -> next = head;
    // step 3
    head = newNode;
}

int main(){
    Node* head = new Node(10);
    insertAtHead(head,20);
    insertAtHead(head,40);
    insertAtHead(head,60);
    insertAtHead(head,80);
    insertAtHead(head,100);
    cout<<"Insert node at begining of the linked list -> "<<endl;
    print(head);
    return 0;
}