// Size & Capacity
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec; //0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<"Size of Vector = "<<vec.size()<<endl; //3
    cout<<"Capacity of Vector = "<<vec.capacity()<<endl;
return 0;
}