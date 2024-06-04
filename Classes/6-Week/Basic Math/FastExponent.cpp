#include <iostream>
using namespace std;
int fastExponent(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // Odd ->
            ans = ans * a;
        }
        a = a * a;
        b >>= 1; // Right shift means divide by two
    }
    return ans;
}
// T.C -> O(logb)
int main()
{
    cout << fastExponent(5, 4) << endl;
    return 0;
}