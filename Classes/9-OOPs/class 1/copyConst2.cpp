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
            cout<<"Default Constructor called"<<endl;
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
    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->type<<endl;
    }
};

int main()
{
    Animal a;
    a.age = 22;
    a.setWeight(101);
    a.type = "Ankan";

    //copy
    Animal b = a;

    //print call
    cout<<"a -> ";
    a.print();
    cout<<"b -> ";
    b.print();

    a.type[0] = 'G';
    cout<<"Now a -> ";
    a.print();
    cout<<"Now b -> ";
    b.print();

return 0;
}