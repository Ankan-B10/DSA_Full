#include<iostream>
#include<string>
using namespace std;

//static keyword in class
class A{
public:
    int x;
    
    void incX(){ //it increment the x
        x=x+1;
    }
};

int main()
{
    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;
    cout<<obj2.x<<endl;
    obj1.incX();
    cout<<obj1.x<<endl;
return 0;
}