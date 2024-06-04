#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *c = &a;
    c = c + 1;
    cout << a << endl;
    cout << *c << endl; // garbage value
    cout << &a << endl;
    return 0;
}