#include<iostream>
using namespace std;
int main()
{

    int arr[5] = {3,4,2,1,8};

    sort(arr, arr+5);
    
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Descending order sort ->"<<endl;
    int arr2[5] = {3,4,2,1,8};

    sort(arr2, arr2+5, greater<int>()); //greater<int>() used for descending

    cout<<"sorted vector = ";
    for(int val: arr2){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}