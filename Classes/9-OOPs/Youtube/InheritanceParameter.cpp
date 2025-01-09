#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){ //parameterized
        this->name = name;
        this->age = age;
    }

};

class Student: public Person{ //public mode inheritnce
    //name, age, rollno -> name,age already exists,so inherit those
public:
    int rollno;

    Student(string name, int age, int rollno) : Person( name, age){ //Person func call
        this->rollno = rollno;
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl; 
        cout<<"rollno : "<<rollno<<endl; 
    }
};

int main()
{
    Student s1("Rudra", 21, 10);
    s1.getInfo();
return 0;
}