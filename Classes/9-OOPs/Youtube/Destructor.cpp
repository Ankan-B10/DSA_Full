#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        string name;
        double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name; //static 
        cgpaPtr = new double;//dynamic
        *cgpaPtr = cgpa;
    }

    //destructor
    ~Student(){
        //when we don't need code, it calls automatically 
        cout<<"Hi, I delete everything";
        delete cgpaPtr; //must needed in companies -> memory leak 
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl; 
    }
};

int main()
{
    Student s1("Ankan", 8.9);
    // Student s2(s1); //new
    s1.getInfo();

return 0;
}