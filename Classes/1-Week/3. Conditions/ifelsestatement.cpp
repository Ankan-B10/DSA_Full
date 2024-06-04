#include <iostream>
using namespace std;

int main()
{
  int marks;
  cin >> marks;

  // if-elseif-else
  if (marks >= 90)
  {
    cout << "A grade";
  }
  else if (marks >= 80)
  {
    cout << "B Grade";
  }
  else if (marks >= 60)
  {
    cout << "C Grade";
  }
  else if (marks >= 40)
  {
    cout << "D grade";
  }
  else
  {
    cout << "F Grade";
  }
}