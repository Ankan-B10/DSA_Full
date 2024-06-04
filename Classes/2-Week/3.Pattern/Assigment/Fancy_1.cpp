/* The pattern looks like - (for input 5)  
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****               */
#include <iostream>
#include "assert.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n - ";
    cin >> n;
    assert(n <= 9);
    for (int i = 0; i < n; i++)
    {
        int start_num_index = 8 - i;
        int num = i + 1;
        int count_num = num;
        for (int j = 0; j < 17; j++)
        {
            if (j == start_num_index && count_num > 0)
            {
                cout << num;
                start_num_index += 2;
                count_num--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}