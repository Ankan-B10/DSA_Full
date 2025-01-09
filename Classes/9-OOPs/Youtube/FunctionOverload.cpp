#include<iostream>
#include<string>
using namespace std;

class Print{
    public:
        void show(int x){
            cout<<"int print : "<<x<<endl;
        }
        void show(char ch){
            cout<<"char print : "<<ch<<endl;
        }
};


int main()
{
    Print p1;
    // p1.show(101);
    p1.show('a');
return 0;
}