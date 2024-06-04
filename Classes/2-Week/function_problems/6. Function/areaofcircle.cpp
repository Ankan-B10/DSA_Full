#include <iostream>
using namespace std;
float area_circle(float rad)
{
    float a = 3.14 * rad * rad;
    return a;
}
int main()
{
    float rad;
    cout << "enter radius of circle=";
    cin >> rad;
    float area = area_circle(rad);
    cout << "area of circle=" << area;
    return 0;
}