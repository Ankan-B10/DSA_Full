#include<iostream>
using namespace std;
// syntax of class create
class Animal{

};
class Animal2{
    int age;
    int weight;
    char ch;
};
int main()
{
    cout<<"size of empty class = "<<sizeof(Animal)<<endl;
    cout<<"size of Animal2 class = "<<sizeof(Animal2);
    // so why 12 for Animal2 found?
return 0;
}