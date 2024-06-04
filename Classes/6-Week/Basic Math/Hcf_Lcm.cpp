#include <iostream>
using namespace std;
int hcf(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}
int main()
{
    int num1, num2, h, l;
    cout << "enter two numbers = ";
    cin >> num1 >> num2;
    h = hcf(num1, num2);
    l = lcm(num1, num2);
    cout << "HCF value = "<<h<<endl;
    cout << "LCM value = "<<l<<endl;
    return 0;
}
