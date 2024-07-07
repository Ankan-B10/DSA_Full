#include<iostream>
using namespace std;
class Animal{
    public:
        int age;
        int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }
};

//inheritance
class Dog: public Animal{
    //noting but have all properties of Animal class
};

int main()
{
    Dog d1;
    d1.eat();
return 0;
}