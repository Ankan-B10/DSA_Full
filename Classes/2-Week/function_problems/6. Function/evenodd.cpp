#include<iostream>
using namespace std;
int checkevenodd(int n) {
   if(n%2==0){
    cout<<"number is even";
   }
   else {
    cout<<"number is odd";
   }
}
int main(){
    int n;
    cout<<"enter a number=";
    cin>>n;
     checkevenodd(n);
    return 0;
}