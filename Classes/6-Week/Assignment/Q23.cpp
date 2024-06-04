#include <iostream>
using namespace std;
void fun(int a[])
{
    cout << "fun- " << a[0] << endl;
}
int main()
{
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << "main- " << a[0] << endl;
    return 0;
}