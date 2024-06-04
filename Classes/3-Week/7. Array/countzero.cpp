#include<iostream>
using namespace std;
void countnum(int arr[],int n){
  int numzero=0;
  int numone=0;
 for(int i=0;i<n;i++){
    if(arr[i]==0){
      numzero++;
    }
    if(arr[i]==1){
      numone++;
    }
  }
  cout<<numzero<<endl;
  cout<<numone;
}

int main(){
    int n,arr[30];
    cout<<"enter no of elements of array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
    }
    cout<<endl;

countnum(arr,n);
}