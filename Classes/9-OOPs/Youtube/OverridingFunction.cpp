#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout<<"Parent class override\n";
    }
};
class Child : public Parent{ //inherit Parent
  public:
    void getInfo(){
        cout<<"Child class override\n";
    }  
};

int main()
{
    Child c1;
    c1.getInfo();
return 0;
}