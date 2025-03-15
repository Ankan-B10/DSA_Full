// it don't use [], only use emplace, insert

#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<string, int>m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.insert({"tv", 100});
    m.emplace("phone", 200);
    m.emplace("phone", 200);
    m.emplace("phone", 200);

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    // multi map print all the values, but map only print one

    cout<<"After erase all -"<<endl;

    m.erase("tv"); // it erase all the values of tv
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    //if we want delete only on intenses 
    cout<<"After erase only one thing  -"<<endl;

    m.erase(m.find("phone"));

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }

return 0;
}