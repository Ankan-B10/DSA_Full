#include <iostream>
using namespace std;
int main()
{
    char name[9] = "SherBano";
    char *c = &name[0];

    cout << name << endl;
    cout << &name << endl;
    cout << *(name + 3) << endl;
    cout << c << endl;
    cout << &c << endl;
    cout << *(c + 3) << endl;
    cout << c + 2 << endl;
    cout << *c << endl;
    cout << c + 8 << endl;
    return 0;
}