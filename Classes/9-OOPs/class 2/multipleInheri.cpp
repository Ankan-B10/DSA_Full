// Multiple Inheritence
#include<iostream>
using namespace std;
class A{
    public:
        int physics;
};

class B{
    public:
        int chemistry;
};

class C: public A, public B{ // inherits both class
    public:
        int maths;
};

int main()
{
    C subject;
    subject.physics = 95;
    subject.chemistry = 98;
    subject.maths = 100;
    cout<<subject.physics<<" "<<subject.chemistry<<" "<<subject.maths<<endl;
return 0;
}