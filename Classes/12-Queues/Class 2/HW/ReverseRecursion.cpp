#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueueRec(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }
    //step 1 -> store 1st element
    int temp = q.front();
    q.pop();
    //step 2 -> Recursive call
    reverseQueueRec(q);

    // step 3 -> push 1st element to last idx
    q.push(temp); 
}

int main()
{
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(7);
    
    reverseQueueRec(q);
    cout<<"Printing Queue "<<endl;
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
return 0;
}