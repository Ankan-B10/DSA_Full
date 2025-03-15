#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    //sort in asending order
    map<string, int>mp;
    mp["tv"] = 100;
    mp["laptop"] = 50;
    mp["headphones"] = 120;
    mp["watch"] = 200;
    
    mp.insert({"camera", 25});
    mp.emplace("apple iphone", 100);

    for(auto i: mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
return 0;
}