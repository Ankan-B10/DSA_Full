#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(22);
    st.push(30);
    st.push(40);

    //remove
    st.pop();

    //check top element
    cout<<"Element on top is: "<<st.top()<<endl;

    //size check
    cout<<"Now size of the stack is: "<<st.size()<<endl;

    //check empty or not
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl; 
    }

return 0;
}