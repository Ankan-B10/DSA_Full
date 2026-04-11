#include<iostream>
using namespace std;

int fun(int a, int b){
    if(b == 1)
        return a;
    else{
        return a*fun(a, b-1);
    }
    
}
int main()
{
    int a, b;
    cout<<"Enter the base and power = ";
    cin>> a>>b;
    int result;
    result = fun(a,b);
    cout<<"base of "<<a<<" and power of "<<b<<" is = "<<result<<" ";
return 0;
}