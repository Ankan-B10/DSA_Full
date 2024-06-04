// Assume integer takes 4 bytes and integer pointer 8 bytes
#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int *c;
    cout << "Size of integer is - " << sizeof(a) << endl;
    cout << "Size of pointer is - " << sizeof(*c) << endl;
    return 0;
}