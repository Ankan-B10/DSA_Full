#include <iostream>
#include <list>
using namespace std;

int main(){

    list <int> l;

    l.emplace_back(1);
    l.emplace_back(2);
    l.emplace_front(3);
    l.emplace_front(5);

    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}