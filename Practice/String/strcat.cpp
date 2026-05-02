#include<iostream>
#include<string>
using namespace std;
int main()
{
    char arr[20] = "Hello"; //arr* -> not allowed
    char arr2[10] = " World";
    strcat(arr, arr2); //concatenating arr2 to arr
    cout<<"Concatenated string in arr is = "<<arr<<endl;
    cout<<"Second string is = "<<arr2<<endl;

return 0;
}