#include<iostream>
#include<cstring>
using namespace std;

int getlength(char word[])
{
    int length=0;
    int i=0;

    while(word[i] !='\0')
    {
        length++;
        i++;
    }

    return length;
}

void convertuppercase(char word[])
{
    int n=getlength(word);

    for(int i=0;i<n;i++)
    {
       word[i] = word[i] - 'a' + 'A';
    }
}


int main()
{
    char word[100];
    cout<<"Enter a word ="<<endl;
    cin>>word;

    convertuppercase(word);
    cout<<word;
    return 0;
}