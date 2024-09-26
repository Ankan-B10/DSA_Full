#include <iostream>
#include<stack>
using namespace std;

int main(){
    string str = "ankan";
    stack<char> st;
    cout<<"Original String is ->"<<endl;
    cout<<str<<endl;
    for(int i=0; i<str.length(); i++){
        st.push(str[i]);
    }
    cout<<"Reverse String is ->"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout << endl;
    return 0;
}