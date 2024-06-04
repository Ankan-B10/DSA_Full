// Assume the memory address of variable is 200
// size of double variable is 8 bytes
#include <iostream>
using namespace std;

int main()
{
    double a = 10.54;
    double *d = &a;
    d = d + 1;
    cout<<&a<<endl; // ans is 200
    cout << d << endl; // value incresed by 8bytes, ans = 208
    return 0;
}