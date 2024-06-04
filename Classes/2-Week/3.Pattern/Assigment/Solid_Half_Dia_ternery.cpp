/* The Pattern looks like - (for input 5)
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *                       */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n - ";
    cin >> n;
    for (int row = 0; row < 2 * n - 1; row++)
    {
        // Small code
        int cond = row < n ? row : n - (row % n) - 2;
        for (int col = 0; col <= cond; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}