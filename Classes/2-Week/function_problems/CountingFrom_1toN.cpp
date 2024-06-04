#include <iostream>
using namespace std;
void printCount(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int N;
    cout << "Enter the value of N = ";
    cin >> N;
    printCount(N);
    return 0;
}