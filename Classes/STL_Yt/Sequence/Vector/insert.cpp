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

   v.insert(v.begin(), 100); // v.insert(position, element)
   
   v.insert(v.begin()+2, 1000);

    cout<<"Vector after insert elements - "<<endl;
    for(int val2: v){
        cout<<val2<<" ";
    }
    cout<<endl;


return 0;
}