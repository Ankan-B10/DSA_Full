#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};

    vec.push_back({33, 55}); //insert
    vec.emplace_back(44,66); //in-place objects create, don't look anything

    // for(pair<int , int>p : vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
     for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
return 0;
}