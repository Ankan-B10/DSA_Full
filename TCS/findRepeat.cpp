#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findRep(vector<int> &a){
    unordered_map<int, int>mp;
    for(auto x: a)
        mp[x]++; //store elements in map
    cout<<"The elements which are repeted are - ";
    for(auto i: mp){
        if(i.second > 1)
            cout<<i.first<<" ";
    }
}
int main()
{
    vector<int>a = {2,1,3,4,2,3,8};
    findRep(a);
return 0;
}