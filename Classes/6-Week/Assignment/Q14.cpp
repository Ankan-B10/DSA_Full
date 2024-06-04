// Assume address of 0th index of array 'b' is 200. what will br the output
#include <iostream>
using namespace std;

int main()
{
    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;
    // cout << b << endl;
    return 0;
}