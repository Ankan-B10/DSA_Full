#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary; // salary details have accountance 
    
    public:
    //properties / attributes
        string name;
        string dept;
        string subject;

    //methods / member functions
    void changeDept(string newDept){
        dept = newDept; // assign to change
    }
    //acess the salary from private
    void setSalary(double s){ //setter
        salary = s;
    }
    double getSalary(){ //getter
        return salary;
    }
};

int main()
{
    Teacher t1; //object create
    t1.name = "Ankan";
    t1.subject = "C++";
    t1.dept = "CS";
    cout<<t1.dept<<endl;
    t1.changeDept("IT");

    t1.setSalary(25000); // call the setter func
    cout<<t1.name<<endl; 
    cout<< t1.subject<<endl;
    cout<<t1.getSalary()<<endl; 
    cout<<t1.dept<<endl;
return 0;
}