#include <iostream>
using namespace std;

int main()
{
    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p[0] << endl;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}