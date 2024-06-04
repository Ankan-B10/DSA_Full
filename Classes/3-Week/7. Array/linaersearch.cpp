#include<iostream>
using namespace std;
int main(){
    int n,item,arr[30];
    cout<<"enter no of elements of array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
    }
    cout<<endl;
    cout<<"enter item to search =";
    cin>>item;
    for(int i=0;i<n;i++) {
        if(arr[i]==item){
            cout<<"item found";
            break;
        }
        
    }
     cout<<"item not found";
}