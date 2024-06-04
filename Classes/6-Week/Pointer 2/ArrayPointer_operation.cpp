#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {12, 44, 66, 18};
    cout << "1- " << *arr << endl;
    cout << "2- " << *arr + 1 << endl;
    cout << "3- " << *(arr) + 1 << endl;
    cout << "4- " << *(arr + 1) << endl;
    cout << "5- " << *(arr + 2) << endl;
    cout << "6- " << *(arr + 3) << endl;
    cout << "7- " << arr[1] << endl;
    cout << "8- " << arr[3] << endl;
    return 0;
}