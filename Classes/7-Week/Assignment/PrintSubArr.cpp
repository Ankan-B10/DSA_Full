#include<iostream>
#include<vector>
using namespace std;
void printSub_util(vector<int> &nums, int start, int end){
    // base
    if(end == nums.size()){
        return;
    }
    //1 case sol
    for(int i=start; i<=end; i++){
        cout<<nums[i]<<",";
    }
    cout<<endl;
    //RE
    printSub_util(nums, start, end+1);
}

// printing all subarrays
    void printSubArr(vector<int>&nums){
        for(int start=0; start<nums.size();start++){
            int end = start;
            printSub_util(nums,start,end);
        }
    }

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> nums(arr, arr+ sizeof(arr) / sizeof(arr[0]));
    printSubArr(nums);
return 0;
}