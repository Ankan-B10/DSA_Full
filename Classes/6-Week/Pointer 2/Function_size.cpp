#include <iostream>
using namespace std;
void solve(int arr[])
{
    cout << "Size inside solve function - " << sizeof(arr) << endl;
    cout << "arr - " << arr << endl;
    cout << "&arr - " << &arr << endl;
    arr[0] = 50;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    cout << "Size inside main function - " << sizeof(arr) << endl;
    cout << arr << endl;
    cout << &arr << endl;

    // Printing array inside main
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Now calling solve function -> " << endl;
    cout << endl;
    solve(arr);
    cout << endl;
    cout << "Again calling Main function ->" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}