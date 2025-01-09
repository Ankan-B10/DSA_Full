#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout<<"Parent class override\n";
    }
    virtual void hello(){
        cout<<"hello from parent...\n";
    }
};
class Child : public Parent{ //inherit Parent
  public:
    void getInfo(){
        cout<<"Child class override\n";
    }
    void hello(){
        cout<<"hello from child...\n";
    }  
};

int main()
{
    Child c1;
    c1.getInfo();
    c1.hello();
return 0;
}