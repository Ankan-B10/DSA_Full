#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;

    q.push(1);
    q.push(3);
    q.push(5);

    cout<<"size of queue = "<<q.size()<<endl;

    while(!q.empty()) {
        cout<<q.front()<<" "; //front,rear in queue
        q.pop(); 
    }
    cout<<endl;
return 0;
}