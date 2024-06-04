#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr{10,20,40,60,70};
    int sum=80;
    // //print all pairs
	// //outer loop will traverse for each element
    for(int i=0; i<arr.size();i++){
        int element = arr[i];

    //for every element, will traverse on aage wale elements
    for(int j=i+1; j<arr.size();j++){
       if(element + arr[j]==sum){
        cout<<"pair = "<<element<<","<<arr[j]<<endl;
       }
    }
    }

}