#include<iostream>
using namespace std;
void f(int n){
    if(n==0 || n==1){
        cout<<n;
        return;
    }
    else{
        f(n/2); //rec call
        cout<<n%2; 
    }
}
int main()
{
    int n;
    cout<<"Enter a decimal no - ";
    cin>>n;
    f(n);
return 0;
}