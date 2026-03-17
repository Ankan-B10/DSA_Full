#include<iostream>
using namespace std;
int findmin(int a[], int size){
    int mini = a[0];
    for(int i=0; i<size; i++){
        if(a[i]<mini){
            mini = a[i];
        }
    }
    return mini;
}
int main()
{
    int m;
    int a[] = {2, 3,-1, -99, 1001, -99999};
    int size = sizeof(a)/sizeof(a[0]);
    m = findmin(a, size);
    cout<<"Minimum element is = "<<m<<endl;
return 0;
}