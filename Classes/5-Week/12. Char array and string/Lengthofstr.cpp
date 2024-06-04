#include<iostream>
#include<cstring>
using namespace std;
// int getlength(char name[])
// {
//     int length=0;
//     int i=0;

//     while(name[i] !='\0')
//     {
//         length++;
//         i++;
//     }

//     return length;
// }

int main()
{
     char name[100];
    cout<<"Enter your name ="<<endl;
    cin>>name;
    // int length=getlength(name);
    // cout<<" length is ="<<length;
   cout << strlen(name);
    return 0;

}


