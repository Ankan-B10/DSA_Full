#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    //sort in asending order
    map<string, int>mp;
    cout<<"Map arranged by help of alphabet ->"<<endl;
    mp["tv"] = 100;
    mp["laptop"] = 50;
    mp["headphones"] = 120;
    mp["watch"] = 200;

    for(auto i: mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    

return 0;
}