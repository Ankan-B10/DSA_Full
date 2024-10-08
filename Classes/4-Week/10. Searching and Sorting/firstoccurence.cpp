#include <iostream>
#include<vector>
using namespace std;
int findfirstoccurence(vector<int> arr,int target){
    int s=0;
    int e= arr.size()-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        
        if(arr[mid] ==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
         else if(arr[mid]>target){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main() {
    vector<int>v{1,2,3,4,4,4,4,5,6};
    int target= 7;
    int indexoffirstoccurence= findfirstoccurence(v,target);
    if(indexoffirstoccurence==-1){
        cout<<"not found";
    }
    else{
        cout<<"find at"<<" "<<indexoffirstoccurence<<" "<<"index";
    }

}

// #include <iostream>
// #include<vector>
// using namespace std;

// int lastOcc(vector<int> arr, int target) {
//   int s = 0;
//   int e = arr.size() - 1;

//   int mid = s + (e-s)/2;
//   int ans = -1;

//   while(s <= e) {
//     if(arr[mid] == target) {
//       //ans store
//       ans = mid;
//       //right search
//       s = mid + 1;
//     }
//     else if(target < arr[mid] ) {
//       //left search
//       e = mid - 1;
//     }
//     else if(target > arr[mid] ) {
//       //right search
//       s = mid + 1;
//     }
//     mid = s + (e-s)/2;
//   }
//   return ans;

// }

// int main() {
//   vector<int> v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
//   int target = 7;

//   int ans = lastOcc(v, target);
//   cout << "Last occurence is at " << ans << endl;
 
//   return 0;
// }