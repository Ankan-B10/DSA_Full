#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter the character array - ";
    cin>>s;
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        // for lowercase letters
        hash[s[i] - 'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //Fetch
        cout<<hash[c - 'a']<<endl;
    }
return 0;
}