#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary; // salary details have accountance 
    
    public:
    // non-parameterized constructor
    Teacher(){
        cout<<"Hi, I am constructor\n";
        dept = "Computer Science"; //initillization
    }

    //parameterized constructor
    Teacher(string n, string d, string s, double sal){
       name = n;
       dept = d;
       subject = s;
       salary = sal;
    }

    //properties / attributes
        string name;
        string dept;
        string subject;

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