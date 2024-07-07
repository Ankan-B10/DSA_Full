// Operator Overloading -> +
#include<iostream>
using namespace std;
class Ankan{
    public:
        int val;
    void operator + (Ankan &obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<"Substract Value = "<<(value1 - value2);
    }
};
int main()
{
    Ankan obj1,obj2;
    obj1.val = 7;
    obj2.val = 2;
    obj1+obj2;
return 0;
}