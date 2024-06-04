// 1 2 3 4    -> row 0
// 1 2 3
// 1 2 
// 1          -> row 3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of line - ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}