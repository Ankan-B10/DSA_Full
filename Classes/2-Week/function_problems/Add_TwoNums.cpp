#include <iostream>
using namespace std;
int add(int num1, int num2)
{
    int sum = 0;
    sum = num1 + num2;
    return sum;
}
int main()
{
    int num1, num2;
    cout << "Enter the two number 1 - ";
    cin >> num1;
    cout << "Enter the two number 2 - ";
    cin >> num2;
    int ans = add(num1, num2);
    cout << "Sum of two numbers = " << ans << endl;
    return 0;
}