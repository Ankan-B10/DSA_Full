#include<iostream>
using namespace std;
int main()
{
    int a = 5,b = 6,c,d;
    c = a,b;
    d = (a,b);
    cout<<c<<" "<<d;
return 0;
}