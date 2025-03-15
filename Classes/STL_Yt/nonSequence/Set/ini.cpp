#include<iostream>
#include<set>
using namespace std;
int main()
{

    //random order

    set<int> s;
    
    s.insert(1);
    s.insert(2);
    s.insert(6);
    s.insert(4);
    s.insert(8);

    s.insert(1);
    s.insert(2);
    s.insert(6);

    for(auto val: s){
        cout<<val<<" ";
    }
    cout<<endl;

return 0;
}