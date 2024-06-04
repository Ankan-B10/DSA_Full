// Assume that address of 0th index of array 'a' is 200. what is the output ?
#include <iostream>
using namespace std;

int main()
{
    int a[3] = {1, 2, 3};
    cout << *(a + 2);
    return 0;
}