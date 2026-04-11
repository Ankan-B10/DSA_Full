#include<iostream>
using namespace std;

int add(int a, int b){
    int result = a+b;
    return result;
}
int main()
{
    int a, b;
    cout<<"Enter the value of a and b = ";
    cin>> a>>b;
    int res = add(a,b);
    cout<<"Addition of "<<a<<" and "<<b<<" is = "<<res<<endl;
return 0;
}