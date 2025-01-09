#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name, int age){ //parameterized
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){
        // default constructor
        cout<<"1.Parent Constructor...\n";
    }
    ~Person(){
        cout<<"1.This is Parent Destructor...\n";
    }
};

class Student: public Person{
    //name, age, rollno -> name,age already exists,so inherit those
public:
    int rollno;
    Student(){
        // default constructor
        cout<<"2.Child Constructor...\n";
    }
    ~Student(){
        cout<<"2.This is Child Destructor...\n";
    }
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl; 
        cout<<"rollno : "<<rollno<<endl; 
    }
};

int main()
{
    Student s1;
    s1.name = "Ankan";
    s1.age = 21;
    s1.rollno = 10;
    s1.getInfo();
return 0;
}