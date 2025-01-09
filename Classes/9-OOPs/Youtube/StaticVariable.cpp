#include<iostream>
#include<string>
using namespace std;

void fun(){
    int x = 0;//normally block create in stack 
    cout<<"x : "<<x<<endl;
    x++;
};

void fun2(){
    //static is init for lifetime in memory
    static int x = 0;//now increasing for static
    cout<<"x : "<<x<<endl;
    x++;
};

int main()
{
    fun();
    fun();
    fun();
    fun2();
    fun2();
    fun2();
return 0;
}