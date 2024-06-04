#include <iostream>
using namespace std;
int maxi(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}
int main()
{
    int num1, num2, num3;
    cout << "Enter the three numbers - " << endl;
    cin >> num1 >> num2 >> num3;
    int maximum = maxi(num1, num2, num3);
    cout << "Maximum number between 3 numbers is - " << maximum << endl;
    return 0;
}