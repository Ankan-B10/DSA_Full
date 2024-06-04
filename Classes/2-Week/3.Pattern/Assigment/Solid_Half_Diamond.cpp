/* The Pattern looks like -
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *                 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n - ";
    cin >> n;
    for (int row = 0; row < 2 * n - 1; row++)
    {
        int cond = 0;
        if (row < n)
        { // growing phase of Diamond
            cond = row;
        }
        else
        { // shrinking phase of Diamond
            cond = n - (row % n) - 2;
        }
        for (int col = 0; col <= cond; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}