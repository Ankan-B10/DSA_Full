#include <iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,7,8};
    int n=8;
    int sum1=(n*(n+1))/2;
    int sum2=0;
    for(int i=0;i<n-1;i++){
        sum2=arr[i]+sum2;
    }
    int missnum=sum1-sum2;
    cout<<"missing num = "<<missnum;
}