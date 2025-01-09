#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;


};

class Student: public Person{ 
    //name, age, rollno -> name,age already exists,so inherit those
public:
    int rollno;
};

class GradStudent: public Student{
    //name, age, rollno inherit from Student
public:
    string researchArea;
};

int main()
{
   GradStudent s1;
   s1.name = "tony stark";
   s1.rollno = 21;
   s1.researchArea = "Physics";
   cout<<s1.name<<endl;
   cout<<s1.researchArea<<endl;
return 0;
}