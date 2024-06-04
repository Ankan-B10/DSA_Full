/* The pattern looks like -
              1
             121
            12321
           1234321
          123454321       */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n - ";
    cin >> n;
    int k = n;
    for (int row = 0; row < n; row++)
    {
        int count = 1;
        for (int col = 0; col < k; col++)
        {
            if (col < n - row - 1)
            {
                cout << " ";
            }
            else if (col <= n - 1)
            {
                cout << count;
                count++;
            }
            else if (col == n)
            {
                count = count - 2;
                cout << count;
                count--;
            }
            else
            {
                cout << count;
                count--;
            }
        }
        k++;
        cout << endl;
    }
    return 0;
}