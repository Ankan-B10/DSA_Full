#include<iostream>
#include<string>
using namespace std;

// Multiple Inheritance Example
class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};

//TA -> Teaching Assistant(Phd student)
class TA: public Student, public Teacher{

};

int main()
{
   TA t1;
   t1.name = "tony stark";
   t1.subject = "C++";

   cout<<t1.name <<endl;
return 0;
}