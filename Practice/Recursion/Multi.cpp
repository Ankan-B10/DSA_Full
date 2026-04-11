#include<iostream>
using namespace std;

void mul(int a, int b){
    int result = a*b;
    cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<result<<endl;
}
int main()
{
    int a, b;
    cout<<"Enter the value of a and b = ";
    cin>> a>>b;
    mul(a,b);
return 0;
}