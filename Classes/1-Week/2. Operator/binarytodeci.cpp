#include<iostream>
using namespace std;
int binarytodecimal(int n){
     int i=1, bit = 0;
    while(n>0){
     int rem=n%2;
     bit += rem * i;
    n=n/2;
    i *= 10;
    }
    return bit;
}
int main() {
    int n;
    cout<<"Enter a number - ";
    cin>>n;
    int res = binarytodecimal(n);
    cout<<res<<" ";
return 0;
}