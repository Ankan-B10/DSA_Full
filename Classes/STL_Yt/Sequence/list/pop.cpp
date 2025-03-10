#include <iostream>
#include <list>
using namespace std;

int main(){

    list <int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    for(int val: l){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"after pop front ->";
    l.pop_front();
    for(int val2: l){
        cout<<val2<<" ";
    }
    cout<<endl;

    cout<<"after pop back ->";
    l.pop_back();
    for(int val3: l){
        cout<<val3<<" ";
    }
    cout<<endl;

    cout<<endl;
    return 0;
}