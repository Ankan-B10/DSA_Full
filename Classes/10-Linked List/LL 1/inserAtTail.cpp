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

void inserAtTail(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail -> next = newNode;
    tail = newNode;
}

int main(){
    Node* tail = NULL;
    inserAtTail(tail, 20);
    inserAtTail(tail,30);
    print(tail);
}
