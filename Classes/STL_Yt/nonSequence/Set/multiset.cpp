#include<iostream>
#include<set>
using namespace std;
int main()
{


    multiset<int> s; //multiset print all element include duplicates
    
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