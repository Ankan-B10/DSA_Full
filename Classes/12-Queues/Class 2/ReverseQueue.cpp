#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;

    // step1: put all element of q into s
    while(!q.empty()){
        int ele = q.front();
        q.pop();

        s.push(ele);
    }

    //step2: put all ele from stack into q
    while(!s.empty()){
        int ele = s.top();
        s.pop();

        q.push(ele);
    }


}

int main()
{
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(7);
    
    reverseQueue(q);
    cout<<"Printing Queue "<<endl;
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
return 0;
}