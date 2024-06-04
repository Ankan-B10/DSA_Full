#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool isPossibleSol(vector<long long int>trees, long long int m, long long int mid){
    long long int woodColected = 0;
    for(long long int i = 0; i<trees.size();i++){
        if(trees[i] > mid){
            woodColected += trees[i] - mid;
        }
    }
    return woodColected >= m;
}

long long int maxSawBlade(vector<long long int> trees,long long int m){
    long long int start = 0;
    long long int end = *max_element(trees.begin(), trees.end());//stl func
    long long int ans = -1;

    while(start <= end){
        long long int mid = start + (end-start) / 2;
        if(isPossibleSol(trees,m,mid)){
            ans = mid;
            start = mid+1; // look for more sol
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{   
    long long int n,m;
    cout<<"enter the value of n and m - ";
    cin>> n >>m;
    vector<long long int> trees;
    cout<<"Enter the value of trees as array - ";
    while (n--)
    {
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    cout<<"The optimized cutting wood he get = "<<maxSawBlade(trees,m)<<endl;
return 0;
}