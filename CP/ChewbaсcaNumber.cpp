#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = sizeof(s);
    for(int i=0; i<n; i++){
        char c = s[i];
        if(i==0 && c>='5' && c<'9')
            s[i] = '9' - c + '0';
        else if(i>0 && c>='5') s[i] = '9' - c + '0';
    }
    cout<<s;
return 0;
}