#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // Pointer create
    int *ptr = &a;
    cout << "Adress of a is - " << &a << endl;
    cout << "Value stored at ptr is - " << ptr << endl;
    cout << "Value ptr is pointng to is - " << *ptr << endl;
    cout << "Address of ptr is - " << &ptr << endl;
    return 0;
}