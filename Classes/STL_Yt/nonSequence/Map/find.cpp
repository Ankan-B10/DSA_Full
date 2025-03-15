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


    if(mp.find("tv") != mp.end()){
        cout<<"found\n";
    }
    else{
        cout<<"Not found\n";
    }
    

return 0;
}