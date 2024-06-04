#include <iostream>
using namespace std;

int main()
{
    int ***r, **q, *p;
    int i = 8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout << *p << endl;
    cout << **q << endl;
    cout << ***r << endl;
    return 0;
}