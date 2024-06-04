#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int *q = p; // copy the pointer
    int *r = q;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl; // address of a
    cout << &p << endl;
    cout << *p << endl; // 10
    cout << q << endl;  // address of a
    cout << &q << endl;
    cout << *q << endl; // 10
    cout << r << endl;  // address of a
    cout << &r << endl;
    cout << *r << endl; // 10

    cout << (*p + *q + *r) << endl;
    cout << (*p) * 2 + (*r) * 3 << endl;
    cout << (*p / 2) - (*q) / 2 << endl;
    return 0;
}