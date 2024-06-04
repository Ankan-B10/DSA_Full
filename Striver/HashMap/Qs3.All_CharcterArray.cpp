#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter the character array - ";
    cin>>s;
    //Pre compute
    int hash[256] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //Fetch
        cout<<hash[c]<<endl;
    }
return 0;
}