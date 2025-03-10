#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3};

    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int> v2(10, -1); //(size, value) -> used in DP

    for(int val: v2){
        cout<<val<<" ";
    }
    cout<<endl;



return 0;
}