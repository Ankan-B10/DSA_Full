#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1, 2, 3, 4, 5, 6, 7, 8};
    cout<<"Original Vector - "<<endl;
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;

    v.erase(v.begin()); //remove the begin element -> 1

    v.erase(v.begin() + 0); // 2

    v.erase(v.begin() + 2, v.begin() + 3); //v.erase(start, end) -> 5

    cout<<"Vector after erase - "<<endl;
    for(int val2: v){
        cout<<val2<<" ";
    }
    cout<<endl;

return 0;
} 