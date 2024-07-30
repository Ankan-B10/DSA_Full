#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }

        //TODO: Write a destrcutor to delete a node
        ~Node() {
                //write your code here
                cout << "Node with value: " << this->data << "deleted" << endl;
        }
};

void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

Node* reverse(Node* &prev, Node* &curr) {
        //base case
        if(curr == NULL) {
                //LL reverse ho chuki
                return prev;
        }
        
        //1 case solve then recursion will take care
        Node* forward = curr -> next;
        curr -> next = prev;

        reverse(curr, forward);
}

Node* reverseusingLoop(Node* head ) {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL ) {
                Node* temp = curr ->next;
                curr ->next = prev;
                prev = curr;
                curr = temp;
        }
        return prev;
}

Node* reverseusingRecursion(Node* prev, Node* curr) {
        //base case
        if(curr == NULL) 
                return prev;

        Node* temp = curr ->next;
        curr ->next = prev;
        prev = curr;
        curr = temp;

        //recursion sambhal lega
        return reverseusingRecursion(prev, curr);
}

int main() {

        Node* head = new Node(10);
        Node* first = new Node(20);
        Node* second = new Node(30);
        Node* third = new Node(40);
        
        head -> next = first;
        first -> next = second;
        second -> next = third;
        third -> next = NULL; 
        
        print(head);
        cout << endl;

        Node* prev = NULL;
        Node* curr = head;
        cout << "printing reverse list" << endl;
        head = reverseusingRecursion(prev, curr);
        cout << endl;
        print(head);
        cout << endl;

        return 0;
}