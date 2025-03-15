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

    for(auto val: s){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;

    cout<<"Upper bound = "<<*(s.upper_bound(4))<<endl;


return 0;
}