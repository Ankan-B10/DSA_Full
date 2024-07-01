#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    int weight;
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
    // To access private
    int getWeight(){
        return weight;
    }
    // use this keyword
    void setWeight(int weight){
        this->weight = weight;
    }
};

int main()
{
    Student ram;
    // ram.age = 20;
    // ram.type = "god";
    // cout<<"Age of Ram is = "<<ram.age<<endl;
    // cout<<"Type of Ram is = "<<ram.type<<endl;
    // cout<<"calling methods -> "<<endl;
    // ram.eat();
    // ram.sleep();
    
    // private
    ram.setWeight(80);
    cout<<"Weight of Ram is = "<<ram.getWeight()<<"kg";
return 0;
}