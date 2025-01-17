// Size & Capacity
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec; //0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(0); //push it back
    vec.emplace_back(-1);
    vec.emplace_back(-99);

    
    for(int val: vec){
        cout<<val<<" ";
    }
return 0;
}