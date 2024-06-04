#include <iostream>
using namespace std;

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int(*ptr)[10] = &nums; // Pointer to an array of 10 integers

    // accessing elements of the array using pointer notation
    cout << (*ptr)[0] << endl;
    cout << (*ptr)[1] << endl;
    cout << (*ptr)[2] << endl;
    cout << (*ptr)[9] << endl;
    return 0;
}