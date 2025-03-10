//Push and Pop
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec; //0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(9);
    
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;

    vec.pop_back(); //9 poped
    vec.pop_back(); //5 poped
    vec.pop_back(); //4 poped
    for(int v: vec){
        cout<<v<<" ";
    }
return 0;
}