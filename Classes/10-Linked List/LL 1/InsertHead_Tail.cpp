#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertAtHead(Node* &head, Node* &tail, int data){
    //check for Empty LL
        if(head == NULL) {
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        // step 1
        Node* newNode = new Node(data);
        //step 2
        newNode->next = head;
        //step 3
        head = newNode;
}
void insertAtTail(Node* &head, Node* &tail, int data){
    //check for Empty LL
        if(head == NULL) {
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        // step 1
        Node* newNode = new Node(data);
        //step 2
        tail->next = newNode;
        //step 3
        tail = newNode;
}

void printL(Node* &head){
    Node* temp = head;
    while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 90);
    insertAtTail(head, tail, 77);
    insertAtTail(head, tail, 88);
    insertAtTail(head, tail, 99);
    printL(head);
return 0;
}