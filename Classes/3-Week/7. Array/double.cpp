#include<iostream>
using namespace std;
int main(){
    int arr[30];
    int n;
    cout<<"enter number of elements";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<2*arr[i];
    } 
}