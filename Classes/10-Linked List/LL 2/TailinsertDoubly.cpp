#include <iostream>
using namespace std;

class Node{
        public:
        int data;
        Node* prev;
        Node* next;

        Node() {
                this->data = 0;
                this->prev= NULL;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->prev = NULL;
                this->next = NULL;
        }

        ~Node() {
                cout << "Node with value: " << this->data << " deleted" << endl;
        }
};

void print(Node* &head) {
        Node* temp = head;

        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp->next;
        }
}


int getLength(Node* head) {
        int len = 0;
        Node* temp = head;

        while(temp != NULL) {
                temp = temp -> next;
                len++;
        }
        return len;
}

void inserAtTail(Node* &head, Node* &tail, int data){
    // LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    // LL is not empty
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(40);
    Node* head = first;
    Node* tail = third;

    first -> next = second;
    second -> prev = first;

    second -> next = third;
    third -> prev = second;

    print(head);
    cout<<endl;
    
    inserAtTail(head, tail, 202);
    print(head);
    return 0;
}