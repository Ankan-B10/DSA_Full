#include<iostream>
#include<string>
using namespace std;
bool isPali(string &s, int start, int end){
    //Base Case
    if(start >= end){
        return true;
    }
    // One sol
    if(s[start] != s[end]){
        return 0;
    }
    //RE
    return isPali(s,start+1,end-1);
}

int main()
{
    string s;
    cout<<"Enter a string - ";
    cin>>s;
    cout<<isPali(s,0,s.size()-1);
return 0;
}