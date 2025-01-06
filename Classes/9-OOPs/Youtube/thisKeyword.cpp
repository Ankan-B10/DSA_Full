#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary; // salary details have accountance 
    
    public:
        string name;
        string dept;
        string subject;

    // non-parameterized constructor
    Teacher(){
        cout<<"Hi, I am constructor\n";
        dept = "Computer Science"; //initillization
    }

    //parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
       this->name = name;
       this->dept = dept;
       this->subject = subject; //object->constructor
       this->salary = salary;
    } 

    void getInfo(){   //to get the info 
        cout<<"name :" <<name<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"salary: "<<salary<<endl;   
    }
};

int main()
{
    Teacher t1; //constructor call
    t1.name = "Ankan";
    t1.subject = "C++";
    cout<<t1.dept<<endl;
    cout<<t1.name<<endl;

    Teacher t2("Rudra", "IT","DSA", 15000);
    t2.getInfo();
return 0;
}