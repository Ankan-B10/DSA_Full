#include<iostream>
#include<string>
using namespace std;
int main()
{
    char arr[20]; //arr* -> not allowed, 1st argumnet must have some memory area
    char *p ;
    cout<<"Enter a string = ";
    cin>>p;
    strcpy(arr, p);
    cout<<"Copied string in arr is = "<<arr<<endl;
return 0;
}