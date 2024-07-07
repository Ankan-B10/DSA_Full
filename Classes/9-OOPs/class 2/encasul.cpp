#include<iostream>
using namespace std;
class Student{
    public:
        int age;
        int weight;
    void run(){
        cout<<"Running";
    }
};

int main()
{
    Student p;
    p.run();

return 0;
}