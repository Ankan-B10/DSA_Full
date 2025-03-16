#include<iostream>
#include<vector>
using namespace std;
int main()
{
    pair<int, int> p = {1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    //we can make any of datatypes pair
    pair<string, int> p1 = {"Ankan", 6};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    
return 0;
}