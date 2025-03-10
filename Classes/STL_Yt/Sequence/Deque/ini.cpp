#include <iostream>
#include <list>
#include<deque>
using namespace std;

int main(){

    deque <int> d = {1,2 ,3,4,5};

    for(int val=0; val<d.size(); val++){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Random access memory in deque ->"<<endl;
    cout<<d[2]<<endl;
    return 0;
}