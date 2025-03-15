#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int, int> >vec = {{3, 1}, {2,1}, {7,1}, {5,2}};

    sort(vec.begin(), vec.end());

    cout<<"sorted vector = "<<endl;
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;


return 0;
}