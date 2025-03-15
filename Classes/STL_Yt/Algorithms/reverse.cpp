#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1,2,3,4,5};

    cout<<"Original vector - "<<endl;

    for(auto p: vec){
        cout<< p <<" ";
    }
    cout<<endl;

   reverse(vec.begin(), vec.end());

    cout<<"reverse vector = "<<endl;
    for(auto p: vec){
        cout<< p <<" ";
    }
    cout<<endl;


return 0;
}