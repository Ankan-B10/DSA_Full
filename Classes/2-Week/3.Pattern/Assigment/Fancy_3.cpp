/* The pattern looks like - (for input 5)
1
121
12321
121
1                */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n - ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int cond = i <= n / 2 ? 2 * i : 2 * (n - i - 1);
        for (int j = 0; j <= cond; j++)
        {
            if (j <= cond / 2)
            {
                cout << j + 1;
            }
            else
            {
                cout << cond - j + 1;
            }
        }
        cout << endl;
    }
    return 0;
}