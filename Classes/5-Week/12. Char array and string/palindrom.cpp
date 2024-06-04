#include<iostream>
#include<cstring>
using namespace std;

bool checkpalindrom(char word[])
{
    int i=0;
    int n=strlen(word);
    int j=n-1;

    while(i<=j)
    {
        if(word[i]!=word[j])
        {
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char word[100];
    cout<<"Enter a word ="<<endl;
    cin>>word;

    checkpalindrom(word);
    cout<<"palindrom check = "<<checkpalindrom(word);

    return 0;
}