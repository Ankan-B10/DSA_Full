#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;

    s.push(1);
    s.push(2);
    s.emplace(6);

    cout<<"top = "<<s.top()<<endl;

    cout<<"Size ="<<s.size()<<endl;

return 0;
}