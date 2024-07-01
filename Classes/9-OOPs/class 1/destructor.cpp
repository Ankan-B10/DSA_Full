#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    string type;

    // ~ is syntex of destructor
    ~Animal(){
    cout<<"I am the destructor"<<endl;
    }
};

int main()
{
    cout<<"a obj creation "<<endl;
    Animal a;
    a.age = 5;
    // a automatically delete

    cout<<"b obj creation "<<endl;
    Animal* b = new Animal();
    b->age = 12;
    // manually have to delete
    delete b;
return 0;
}