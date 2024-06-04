// Assume the memory address of variable is 400
#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *c = &a;
    c = c + 3;
    cout << c << endl; // 412(answer)
    cout<<*c << endl;
    return 0;
}