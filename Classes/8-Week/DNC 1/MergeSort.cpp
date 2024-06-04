#include<iostream>
using namespace std;

void merge(int arr[],int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s+1;
    int len2 = e-mid;
    int *left = new int[len1];
    int *right = new int[len2];
    //Array start from s.copy
    int k=s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k++];
    }
    //copy values to right array
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k++];
    }
    // Merge 2 sorted array
    int leftIdx = 0;
    int rightIdx = 0;
    int mainArr = s;
    // Run the loop 
    while (leftIdx<len2 && rightIdx<len2){
        if(left[leftIdx] < right[rightIdx]){
            arr[mainArr++] = left[leftIdx++];
        }
        else{
            arr[mainArr++] = right[rightIdx++];
        }
    }
    while (leftIdx < len1)
    {
        arr[mainArr++] = left[leftIdx++];
    }
    while (rightIdx < len2)
    {
        arr[mainArr++] = right[rightIdx++];
    }
}

void mergeSort(int arr[], int s, int e){
    if(s >= e) 
        return;
    //break
    int mid = s+(e-s)/2;
    //recursive call for left arr
    mergeSort(arr,s,mid);
    //recursive call for right arr
    mergeSort(arr,mid+1,e);
    // main merge
    merge(arr,s,e);
}

int main()
{
    int arr[] = {4,5,2,1,3,12,7,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0, e = n-1;
    mergeSort(arr,s,e);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}