#include<iostream>
using namespace std;
void insertPosition(int a[], int n, int element, int pos){
    for(int i=n-1; i>=pos-1; i--){
        a[i+1] = a[i];
    }
    a[pos-1]=element;
} 

int main()
{
    int size=6;
    int a[7] = {10, 20, 30, 40, 50, 60}; //extra space for entering element
    int pos;
    cout<<"Enter the position - ";
    cin>>pos;
    int element;
    cout<<"Enter the element to insert = ";
    cin>>element;

    cout<<"Before insertion -"<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //call the function
    insertPosition(a, size, element, pos);
    cout<<"after insertion the element -"<<endl;
    for(int i=0; i<=size; i++){
        cout<<a[i]<<" ";
    }
return 0;
}