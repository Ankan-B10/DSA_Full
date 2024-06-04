/* The Pattern looks like - 1
                            1 1
                            1 2 1
                            1 3 3 1
                            1 4 6 4 1
                            1 5 10 10 5 1     */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int count = 1;
        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";
            // Formula of Pascle Triangle
            count = count * (row - col) / col;
        }
        cout << endl;
    }
    return 0;
}