#include <iostream>
using namespace std;

void update(int *p)
{
    cout << "Adress stored inside 'p' is - " << p << endl;
    cout << "Adress of 'p' is - " << &p << endl;
    *p = *p + 10;
}
int main()
{
    int a = 5;
    int *ptr = &a;
    update(ptr);
    cout << "Adress of 'a' is - " << &a << endl;
    cout << "Adress of ptr is - " << &ptr << endl;
    cout << "Value Of a is - " << a << endl;
    return 0;
}