#include<iostream>
using namespace std;
class Student{
    private:
        int age;
        int weight;
    public:
    void run(){
        cout<<"Running";
    }
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age = age;
    }
};

int main()
{
    Student p;
    p.setAge(20);
    cout<<"Age of p is = "<<p.getAge()<<endl;
    p.run();

return 0;
}