#include<iostream>
#include<vector>
using namespace std;
int main() {
    // vector<int>arr{1,2,3,4,5,6};
    // vector<int>brr{3,4,9,8,};

    // vector<int>ans;

    // for(int i=0;i<arr.size();i++){
    //     int element = arr[i];
    //   for(int j=0; j<brr.size();j++) {
    //     if(element==brr[j]){
    //         ans.push_back(element);
    //     }
    //   }  
    // }
    // for(int k=0;k<ans.size();k++){
    //     cout<< ans[k]<<" ";
    // }



     vector<int>arr{1,2,3,3,4,5,6};
    vector<int>brr{3,3,4,9,8,};

    vector<int>ans;
    // outer loop for arr
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        // for every element , run loop on brr
      for(int j=0; j<brr.size();j++) {
        if(element==brr[j]){
            // mark
            brr[j]=-1;
            ans.push_back(element);
        }
      }  
    }
    for(int k=0;k<ans.size();k++){
        cout<< ans[k]<<" ";
    }
}