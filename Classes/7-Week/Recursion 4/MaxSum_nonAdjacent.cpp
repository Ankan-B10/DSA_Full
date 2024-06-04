#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr, int target) {
  //base case
  if(target == 0) {
    return 0;
  }
  if(target < 0) {
    return INT_MAX;
  }

  //let's solve 1 case
  int mini = INT_MAX;
  for(int i=0; i<arr.size(); i++) {
    int ans = solve(arr, target - arr[i]);
    if(ans != INT_MAX)
    mini = min(mini, ans + 1);
  }

  return mini;

}

int main() {
    int arr[] = {1,2};
    vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int target = 5; 

  int ans = solve(v, target);
  cout << "Answer is: " << ans << endl;
  return 0;
}