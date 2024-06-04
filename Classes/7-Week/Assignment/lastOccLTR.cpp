#include<iostream>
using namespace std;
void LastOccLTR(string&s, char x, int i, int&ans){
    //base case
    if(i >= s.size()){
        return;
    }
    // one sol
    if(s[i] == x){
        ans = i;
    }

    //Recursive sol
    LastOccLTR(s,x,i+1,ans);
}

int main()
{
    string s="abcddedg";
    char x;
    cin>>x;
    int ans = -1;
    LastOccLTR(s,x,0,ans);
    cout<<ans<<endl;
return 0;
} 