#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {3,5,1,8,2};

    sort(vec.begin(), vec.end());

    cout<<"sorted vector = "<<endl;
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Descending order sort ->"<<endl;
    vector<int>vec2 = {3,5,1,8,2};

    sort(vec2.begin(), vec2.end(), greater<int>()); //greater<int>() used for descending

    cout<<"sorted vector = ";
    for(int val: vec2){
        cout<<val<<" ";
    }
    cout<<endl;


return 0;
}