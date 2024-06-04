#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {12, 44, 66, 18};
    cout << *arr << endl;       // 12
    cout << arr[0] << endl;     // 12
    cout << *arr + 1 << endl;   // 13
    cout << *(arr) + 1 << endl; // 13
    cout << *(arr + 1) << endl; // 44
    cout << arr[1] << endl;
    cout << *(arr) + 2 << endl; // 14
    cout << *(arr + 2) << endl;
    cout << arr[2] << endl;     // 66
    cout << *(arr) + 3 << endl; // 15
    cout << *(arr + 3) << endl;
    cout << arr[3] << endl;

    // arr[i] => *(arr + i) => i[arr]
    cout << "When i = 0" << endl;
    int i = 0;
    cout << arr[i] << endl;
    cout << i[arr] << endl;
    cout << *(arr + i) << endl;
    cout << *(i + arr) << endl;

    cout << "When j = 1" << endl;
    int j = 1;
    cout << j[arr] << endl;
    cout << *(j + arr) << endl;
    return 0;
}