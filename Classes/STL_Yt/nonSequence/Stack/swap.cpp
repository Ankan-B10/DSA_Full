#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    stack<int>s2; //empty stack
    s.push(1);
    s.push(2);
    s.emplace(6);
    cout<<"Before swap ->"<<endl;
    cout<<"s size: "<<s.size()<<endl;
    cout<<"s2 size: "<<s2.size()<<endl;


    s2.swap(s); //swap all values into s2 from s

    cout<<"After swap ->"<<endl;
    cout<<"s size: "<<s.size()<<endl;
    cout<<"s2 size: "<<s2.size()<<endl;
return 0;
}