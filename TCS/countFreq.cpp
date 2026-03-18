#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countfreq(int a[], int size){
    //taking visited array as vector
    vector<bool>visited(size, false);
    for(int i=0; i<size; i++){
        if(visited[i] == true) continue;
        int count = 1;
        //checking for another freq element
        for(int j=i+1; j<size; j++){
            if(a[i] == a[j]){
            visited[j]=true;
            count++;
            }
        }
        cout<<a[i]<<" "<<count<<endl;
    }
}
int main()
{
    int a[] = {2,3,1,2,4,3};
    int size = sizeof(a)/sizeof(a[0]);
    countfreq(a, size);
return 0;
}