#include<iostream>
#include<vector>
using namespace std;
int main()
{
    pair<int, pair<string, int>> p = {1, {"hi", 5}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;

return 0;
}