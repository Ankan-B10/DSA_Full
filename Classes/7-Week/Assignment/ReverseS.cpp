#include<iostream>
#include<string>
using namespace std;

void reverse(string &s, int start, int end){
    //base cae
    if(start >= end){
        return;
    }
    // solu
    swap(s[start],s[end]);
    //recursive code
    reverse(s,start+1,end-1);
}



int main()
{
    string s;
    cout<<"Enter a string - \n";
    cin>>s;
    reverse(s,0,s.size()-1);
    cout<<s<<endl;
return 0;
}