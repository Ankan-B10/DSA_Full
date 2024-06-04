#include <iostream>
using namespace std;
int main(){
    int n,arr[30];
    cout<<"enter no of elements of array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    
    int l=0,r=n-1;
    while(l<r){
        if(arr[l]<0 && arr[r]>0){
            l++;
            r--;
        }
        else if(arr[l]>0 && arr[r]<0){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
       else if(arr[l]<0 && arr[r]<0){
            l++;
        }
        else{
            r--;
        }
    }
     for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
    }

}