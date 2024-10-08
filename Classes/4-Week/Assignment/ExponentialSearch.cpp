#include<iostream>
using namespace std;
int bs(int a[], int start, int end, int x){
    while(start<=end){
        int mid = (start +end)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int expSearch(int a[],int n, int x){
    if(a[0] == x) return 0; // base case
    int i=1;
    while(i<n && a[i]<=x){
        i *= 2;
    }
    return bs(a, i/2, min(i,n-1), x);
}

int main()
{
    int a[] = {1,3,4,5,6,11,13,34,56,70};
    int n = sizeof(a)/sizeof(a[0]);
    int x = 13;
    int ans = expSearch(a, n, x);
    cout<<"The element find in "<<ans<<" index"<<endl;
return 0;
}