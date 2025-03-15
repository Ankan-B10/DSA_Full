// it don't use [], only use emplace

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int>m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("phone", 200);
    m.emplace("phone", 200);
    m.insert({"phone", 200});

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }

return 0;
}