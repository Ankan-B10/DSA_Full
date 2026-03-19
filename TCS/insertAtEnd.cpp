#include<iostream>
using namespace std;
void insertEnd(int a[], int size, int element){
    a[size]=element; //insert at last
} 

int main()
{
    int size=6;
    int a[7] = {10, 20, 30, 40, 50, 60}; //extra space for entering element
    int element;
    cout<<"Enter the element to insert = ";
    cin>>element;
    cout<<"Before insertion -"<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //call the function
    insertEnd(a, size, element);
    cout<<"after insertion the element -"<<endl;
    for(int i=0; i<=size; i++){
        cout<<a[i]<<" ";
    }
return 0;
}