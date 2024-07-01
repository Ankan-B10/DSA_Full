#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int age;
    string type;

    // methods or behavouir or functions
    void eat(){
        cout<<"     eating"<<endl;
    }
    void sleep(){
        cout<<"     sleaping"<<endl;
    }
};

int main()
{

    // static
    Student ram;
    ram.age = 20;
    ram.type = "god";
    cout<<"Age of Ram is = "<<ram.age<<endl;
    cout<<"Type of Ram is = "<<ram.type<<endl;
    cout<<"calling methods -> "<<endl;
    ram.eat();
    ram.sleep();
return 0;
}