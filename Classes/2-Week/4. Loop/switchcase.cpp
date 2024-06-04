#include <iostream>
using namespace std;

int main()
{

	int val;
	cout << "Enter the value " << endl;

	cin >> val;

	switch (val)
	{
	case 1:
		cout << "Love ";
		break;
	case 2:
		cout << "Babbar";
		break;
	case 3:
		cout << "Ramesh";
		break;
	case 4:
		cout << "Rahul";
		break;
	default:
		cout << "Suresh";
	}
	return 0;
}