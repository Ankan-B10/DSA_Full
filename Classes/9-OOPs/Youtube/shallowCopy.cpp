#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        string name;
        double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name; //static 
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Student
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl; 
    }
};

int main()
{
    Student s1("Ankan", 8.9);
    Student s2(s1); //new

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo(); //shallow

return 0;
}