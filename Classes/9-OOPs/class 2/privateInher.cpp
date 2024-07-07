#include<iostream>
using namespace std;
class Animal{
    private:            // not able to inherit
        int age;
        int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }
};

//inheritance -> public
class Dog: public Animal{
    
};

//inheritance -> protected
class Cat: private Animal{
    public: void print(){
        // cout<<this->age;
    }
};

//inheritance -> private
class Lion: private Animal{
    public: void print(){
        // cout<<this->age;
    }
};

int main()
{
    Dog d1;
    // cout<<d1.age<<endl;
    // d1.eat();
    cout<<"\nProtected Cat"<<endl;
    Cat c1;
    c1.print(); // NA
    // cout<<c1.age<<endl; //outside class -> NA
    cout<<"\nPrivate Lion"<<endl;
    Lion l1;
    l1.print(); // NA
    // cout<<l1.age<<endl; //outside class -> NA
return 0;
}