#include <iostream>
using namespace std;
#include <stdlib.h>
#include <math.h>
int main()
{
    float i, j, t, s;
    float n = 100;
    n = n + 14;
    s = n / 10;
    t = 4.72 / n;
    for (j = floor(s); j >= -ceil(s); j--)
    {
        for (i = 0; i <= 4; i = i + t)
        {
            if ((j < s / 2 && j > s / 4 && i < 1 && i > 0.8 || j == 0 && i < 0.6) || (pow(j / s, 2) >= pow(sin(i), 2)))
            {
                cout << " ";
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