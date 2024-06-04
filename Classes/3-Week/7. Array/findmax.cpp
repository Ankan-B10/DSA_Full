#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n, arr[30];
    cout << "enter no of elements of array";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "maximum number of array =" << max;
}