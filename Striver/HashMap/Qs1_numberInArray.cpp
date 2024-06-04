#include<iostream>
using namespace std;
int main(){
    cout<<"enter the array size - ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
//pre compute
    int hash[13] = {0};
    for(int i=0; i<n; i++){
         hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        cout<<"Enter the number to find - ";
        int num;
        cin>>num;
// Fetch
        cout<<num<<" is present in array - "<<hash[num]<<" time"<<endl;
    }
    return 0;
}