#include<iostream>
using namespace std;
void lastOccRTL(string &s,char x,int i,int &ans){
    //base case
    if(i<0) return;
    if(s[i] == x){
        ans = i;
        return;
    }
    //RE
    lastOccRTL(s,x,i-1,ans);
}
int main()
{
    string s;
    cout<<"Enter the String - \n";
    cin>>s;
    char x;
    cout<<"Enter the character value - \n";
    cin>>x;
    int ans = -1;
    lastOccRTL(s,x,s.size()-1,ans);
    cout<<ans<<endl;
return 0;
}