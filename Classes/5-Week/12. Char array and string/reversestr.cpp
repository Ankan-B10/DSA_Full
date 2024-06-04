#include<iostream>
#include<cstring>
using namespace std;
int getlength(char name[])
{
    int length=0;
    int i=0;

    while(name[i] !='\0')
    {
        length++;
        i++;
    }

    return length;
}

int reversestr(char name[])
{
    int i=0;
    int n=getlength(name);
    int j =n-1;
    while(i<=j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main()
{
     char name[100];
    cout<<"Enter your name ="<<endl;
    cin>>name;
    int length=getlength(name);
    cout<<"Initially ="<<name<<endl;
    reversestr(name);
    cout<<"after reversing="<<name;
   
    return 0;

}























