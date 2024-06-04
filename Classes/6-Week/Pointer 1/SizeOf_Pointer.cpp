#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;

    cout << sizeof(p) << endl;

    char ch = 'b';
    char *c = &ch;

    cout << sizeof(c) << endl;

    double doub = 5.030;
    double *d = &doub;

    cout << sizeof(d) << endl;

    return 0;
}