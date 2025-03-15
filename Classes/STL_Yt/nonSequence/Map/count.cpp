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
    
    
    cout<<"count of laptop = "<<mp.count("laptop")<<endl;
    cout<<"total count of laptop have = "<<mp["laptop"]<<endl;

return 0;
}