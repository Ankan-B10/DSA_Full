#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {12, 44, 66, 18};

    cout << arr << endl; // address of arr
    cout << arr[0] << endl;
    cout << &arr << endl;    // address of arr
    cout << &arr[0] << endl; // address of arr

    int *p = arr;
    cout << p << endl; // address of arr
    cout << &p << endl;
    return 0;
}