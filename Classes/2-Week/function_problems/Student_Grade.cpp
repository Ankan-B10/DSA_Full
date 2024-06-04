#include <iostream>
using namespace std;
char grade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else if (marks >= 50)
        return 'E';
    else
        return 'F';
}
int main()
{
    int marks;
    cout << "Enter the Students marks - ";
    cin >> marks;
    cout << "Students Grade is - " << grade(marks);
    return 0;
}