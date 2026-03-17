#include<iostream>
using namespace std;

void rev(int a[], int size){
    int i, temp;
    for(i=0; i<size/2; i++){
        //swap(arr[i], arr[size-1-i])
        temp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = temp;
    }
}

int main()
{
    int a[] = {1, 2, 3,4 ,5};
    int size = sizeof(a)/sizeof(a[0]);
    rev(a, size);
    //to print the reverse
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
return 0;
}