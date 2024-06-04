#include<iostream>
using namespace std;

// same code of traversing , only printing happen after operation 
void print(int arr[], int n, int i){
        // Base case
        if(i >= n){
            return;
        }

        // increse the index
        print(arr, n, i+1);

        cout<<arr[i]<<"->";

}

int main(){ 
    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i = 0;
    print(arr,n,i);
    return 0;
}