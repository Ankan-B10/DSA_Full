// MultiLevel Inheritence
#include<iostream>
using namespace std;
class Fruit{
    public:
        string name;
    void print(){
        cout<<this->name;
    }
};
class Mango: public Fruit{
    public:
        int weight;
        void print(){
        cout<<this->weight;
    }
};
class Alphenso: public Mango{
    public:
        int sugarLevel;
        void print(){
        cout<<this->sugarLevel;
    }
};

int main()
{
    Alphenso A; // Alphenso able to call all class
    A.name = "Fruit Mango";
    A.weight = 20;
    A.sugarLevel = 33;
    cout<<A.name<<"->"<<A.weight<<"->"<<A.sugarLevel<<endl;
return 0;
}