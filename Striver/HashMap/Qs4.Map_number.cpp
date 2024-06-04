#include<iostream>
#include<algorithm>
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
    unordered_map<int,int>mpp;
    for(int i=0; i<n; i++){
         mpp[arr[i]]++;
    }
//iterate the map 
    for(for it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin >> q;
    while(q--){
        cout<<"Enter the number to find - ";
        int num;
        cin>>num;
        cout<<num<<" is present in array - "<<mpp[num]<<" time"<<endl;
    }
    return 0;
}