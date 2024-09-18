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

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
return 0;
}