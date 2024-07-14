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

void insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data); // create a newNode
    // step 2
    newNode -> next = head;
    if(head == NULL){
        tail = newNode;
    }
    // step 3
    head = newNode;
}

void inserAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    tail -> next = newNode;
    if(tail == NULL){
        tail = newNode;
        head = newNode;   
    }
    else
    {
        tail -> next = newNode;
    }
    tail = newNode;
}

int main(){
        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail, 20);
        insertAtHead(head, tail, 50);
        insertAtHead(head, tail, 60);
        insertAtHead(head, tail, 90);
        inserAtTail(head, tail, 77);
        inserAtTail(head, tail, 99);
        print(head);
    return 0;
}