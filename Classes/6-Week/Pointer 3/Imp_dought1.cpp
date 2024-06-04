#include <iostream>
using namespace std;

int main()
{
    int *arr[3];
    int nums[3] = {1, 2, 3};
    int *ptr = nums; // Pointer to int
    // Assigning pointers to elements in the array of pointers

    arr[0] = &nums[0];
    arr[1] = &nums[1];
    arr[2] = &nums[2]; // accessing elements using array notation

    cout << *arr[0] << endl;
    cout << *arr[1] << endl;
    cout << *arr[2] << endl;

    // accessing elements using pointer notation
    cout << *ptr << endl;       // 1
    cout << *(ptr + 1) << endl; // 2
    cout << *(ptr + 2) << endl; // 3
    return 0;
}