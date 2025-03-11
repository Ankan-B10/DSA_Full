#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);
    cout<<"size of queue = "<<pq.size()<<endl;

    while(!pq.empty()) {
        cout<<pq.top()<<" "; // pq use Stack -> top, pop, push
        pq.pop(); 
    }
    cout<<endl;
return 0;
}