//   *     -> 0
//  * *    -> 1
// *   *   -> 2
//*******  -> 3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the line number - ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int boundary = 0;
        for (int col = 0; col < ((2 * n) - 1); col++)
        {
            if (col < n - row - 1)
            {
                cout << " ";
            }
            else if (boundary < 2 * row + 1)
            {
                if (boundary == 0 || boundary == 2 * row || row == n - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                boundary++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}