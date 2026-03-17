#include<iostream>
using namespace std;
int findmax(int a[], int size){
    int maxi = a[0];
    for(int i=0; i<size; i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    return maxi;
}
int main()
{
    int m;
    int a[] = {2, 3,-1, -99, 1001, -99999};
    int size = sizeof(a)/sizeof(a[0]);
    m = findmax(a, size);
    cout<<"Maximum element is = "<<m<<endl;
return 0;
}