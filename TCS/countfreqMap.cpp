#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countfreq(int a[], int size){
    unordered_map<int, int>mp;
    for(int i=0; i<size; i++)
        mp[a[i]]++;
    //now traverse
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}
int main()
{
    int a[] = {2,3,1,2,4,3};
    int size = sizeof(a)/sizeof(a[0]);
    countfreq(a, size);
return 0;
}