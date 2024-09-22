#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s, int target){
    // Base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    //recursion call
    insertAtBottom(s, target);
    //backtrack
    s.push(topElement);
}

void reverseStack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }

    int target = st.top();
    st.pop();

    //reverse stack
    reverseStack(st);
    //insert at bottom target
    insertAtBottom(st, target);

}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<"Printing the Original stack ->"<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    // cout<<endl;

    reverseStack(st);

    cout<<"Printing the Reverse stack ->"<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
return 0;
}