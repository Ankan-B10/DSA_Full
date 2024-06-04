#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int binarySearch(vector<int>& arr, int& s, int& e, int& key) {
  //base case

  if(s > e) 
    return -1;
  
  int mid = (s+e)/2;
  if(arr[mid] == key)
    return mid;

  if(arr[mid] < key) {
    s = mid+1;
    int ans =  binarySearch(arr,s,e, key );
    return ans;
  }
  else {  
    e= mid-1;
    int ans =  binarySearch(arr,s,e, key);
    return ans;
  }

}

int main() {
  int arr_values[] = {10,20,40,60,70,90,99};
  vector<int>v(arr_values, arr_values + sizeof(arr_values) / sizeof(arr_values[0]));
  int target = 99;

  int n = v.size();
  int s = 0;
  int e = n-1;
  int ans = binarySearch(v, s, e, target );

  cout << "Answer is: " << ans << endl;

  return 0;
}