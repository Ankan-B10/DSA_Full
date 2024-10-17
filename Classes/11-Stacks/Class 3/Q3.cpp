// input: 2 1 3 4
// output: 1 -1 3 -1
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int> st;
    vector<int> ans(v.size());
    st.push(-1); //initially push in stack
    
    // L -> R traverse
    for(int i=v.size()-1; i>=0; i--){
        int curr = v[i];
        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }

    //printing stack
    cout<<"Printing "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
return 0;
}