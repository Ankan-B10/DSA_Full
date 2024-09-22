#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>& st, int target){
    // base case
    if(st.empty()){
        st.push(target);
        return;
    }
    int topElement = st.top();
    st.pop();

    //RE call
    solve(st, target);

    //Backtrack 
    st.push(topElement);
}

void insertAtBottom(stack<int> &st){
    if(st.empty()){
        cout<<"Stack is empty, cant insert at bottom"<<endl;
        return;
    }
    int target = st.top();
    st.pop();
    // RE call
    solve(st, target);
}

int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    insertAtBottom(st);
    cout<<"Printing the stack ->"<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
return 0;
}