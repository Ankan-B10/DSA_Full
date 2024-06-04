#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row and col number - ";
    cin >> row >> col;
    cout << "The pattren is - " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}