#include <iostream>
#include <vector>
using namespace std;
void printrowssum(int arr[][3], int row, int col)
{
    int sum = 0;
    cout<<"sum of rows matrix = "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    printrowssum(arr, row, col);
}