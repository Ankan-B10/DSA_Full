#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1, 2, 3, 4, 5, 6, 7, 8};
    cout<<"Original Vector - "<<endl;
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;

    v.clear();

    cout<<"Vector after clear - "<<endl;
    for(int val2: v){
        cout<<val2<<" ";
    }
    cout<<endl;

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

return 0;
}