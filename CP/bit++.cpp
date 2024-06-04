#include<iostream>
using namespace std;
int main()
{
    int a, count = 0;
    string s;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>s;
        if(s[1] == '+'){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<count;
}