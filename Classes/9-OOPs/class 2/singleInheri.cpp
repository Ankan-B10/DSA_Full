// Single Level Inheritence
#include<iostream>
using namespace std;
class Car{
    public:
        string name;
        int weight;
        int color;
    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }
    void breakMaro(){
        cout<<"Breek Mardi"<<endl;
    }
};
class Scorpio: public Car{

};

int main()
{
    Scorpio s1;
    s1.speedUp();
return 0;
}