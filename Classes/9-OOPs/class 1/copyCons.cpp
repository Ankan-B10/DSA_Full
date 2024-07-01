#include<iostream>
#include<string>
using namespace std;
class Animal{
    // state or properties
    private:
    int weight;
    public:
    int age;
    string type;

    // default Constructor
        Animal(){
            this->weight = 0;
            this->age = 0;
            this->type = "";
            cout<<"Constructor called"<<endl;
        }
    
    // Parameterised Constructor
        Animal(int age){
            this->age = age;
            cout<<"Parameterised Constructor Called"<<endl;
        }
    // Parameterised Constructor
        Animal(int age, int weight){
            this->age = age;
            this->weight = weight;
            cout<<"Parameterised 2 Constructor Called"<<endl;
        }
    // copy constructor
    Animal(Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout<<"I am inside copy constructor"<<endl;
    }
    // methods or behavouir or functions
    void eat(){
        cout<<"     eating"<<endl;
    }
    void sleep(){
        cout<<"     sleaping"<<endl;
    }
    // To access private
    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight = w;
    }
};

int main()
{
    // Animal a; // default constructor call
    // Animal* b = new Animal; // dynamicly default constructor call
    
    // Animal c(10);
    // Animal d(20,80);


    Animal a(10);
    Animal* b = new Animal(100,10);

// object copy
    Animal c = a;
    Animal animal1(c);
    Animal d(*b); 
return 0;
}