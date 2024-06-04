#include <iostream>
using namespace std;
int slowExponent(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}
// T.C -> O(b)
int main()
{
    cout << slowExponent(5, 4) << endl;
    return 0;
}