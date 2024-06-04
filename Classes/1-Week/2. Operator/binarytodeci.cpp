#include<iostream>
using namespace std;
int binarytodecimal(int n){
    while(n>0){
     int bit=n%2;
    cout<<bit<<endl;
    n=n/2;
    }
}
int main() {
    int n;
    cin>>n;
   int b= binarytodecimal(n);
   
}