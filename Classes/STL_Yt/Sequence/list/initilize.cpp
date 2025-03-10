#include <iostream>
#include <list>
using namespace std;

int main(){

    list <int> l = {1,2 ,3,4,5};

    for(int val=0; val<l.size(); val++){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}