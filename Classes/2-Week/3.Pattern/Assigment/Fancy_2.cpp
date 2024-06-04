/* The pattern looks like - (for input 4)
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1                     */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n - ";
    cin >> n;
    int count = 1;
    // upword phase
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count;
            count++;
            if (j < i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // shrinking phase
    int start = count - n;
    for (int i = 0; i < n; i++)
    {
        int k = start;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << k;
            k++;
            if (j < n - i - 1)
            {
                cout << "*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
    return 0;
}