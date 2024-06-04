#include <iostream>
using namespace std;
int printEven(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int N;
    cout << "Enter The last number - ";
    cin >> N;
    int evenSum = printEven(N);
    cout << "Sum of all even numbers upto N is - " << evenSum << endl;
    return 0;
}