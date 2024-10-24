#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //creation
    queue<int>q;

    //insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
    //size
    cout << "Size of queue is: "<<q.size() << endl;

    //removal
    q.pop();

    cout << "Size of queue is: "<<q.size() << endl;

    //empty or not
    if(q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    //front element
    cout << "Front element is: " << q.front() << endl;

    //back/rear element
    cout<<"Back element is: " << q.back() << endl;
return 0;
}