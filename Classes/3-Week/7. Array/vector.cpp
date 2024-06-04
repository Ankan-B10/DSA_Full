#include<iostream>
#include<vector>
using namespace std;
int main(){
    // create vector
    vector<int>arr;

    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    cout<< arr.capacity()<<endl;
    cout<< arr.size()<<endl;

    // insret
    arr.push_back(1);
    arr.push_back(2);
    for(int i=0;i<arr.size();i++ ){
        cout<<arr[i]<<endl;
    }
    // remove or delete
    arr.pop_back();
      for(int i=0;i<arr.size();i++ ){
        cout<<arr[i]<<endl;
    }

    vector<int>brr(10,-1);
    cout<<"sizeof b= "<<brr.size()<<endl;
    cout<<"capacityof b= "<<brr.capacity()<<endl;
     for(int i=0;i<brr.size();i++ ){
        cout<<brr[i]<<endl;
    }

}
