#include<iostream>
using namespace std;

int climbStairs(int n){
    //base case - stopping condition
    if(n==0 || n==1){
        return 1;
    }
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of n - "<<endl;
    cin>>n;

    int ans = climbStairs(n);
    cout<<"The Ans is - "<<ans<<endl;
    return 0;
}