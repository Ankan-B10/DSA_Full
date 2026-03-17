#include<iostream>
using namespace std;

void rev(int a[], int i, int j){
    int temp;
    while(i<j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++, j--;
    }
}
int main()
{
    int a[] = {1, 2, 3,4 ,5, 66};
    int size = sizeof(a)/sizeof(a[0]);
    rev(a, 0, size-1);
    cout<<"Reverse array is = ";
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
return 0;
}