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
    void setWeight(int w){
        weight = w;
    }
};


int main()
{
    // dynamic memory
    Student* ankan = new Student;
    (*ankan).age = 20;
    (*ankan).type = "Lion";
    cout<<"Past Ankan age & type = "<<(*ankan).age<<" "<<(*ankan).type<<endl;

    //alternative - dynamic + best way
    ankan->age = 21;
    ankan->type = "Coder";
    cout<<"New Ankan age & type = "<<ankan->age<<" "<<ankan->type<<endl;

    ankan->eat();
    ankan->sleep();
return 0;
}