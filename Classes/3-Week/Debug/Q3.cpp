#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i]<0 && i<j){ // move i until a positive element is encountered
            i++;
        }
        while(arr[j]>0 && i<j){ // move j until a negative element is encountered
            j--;
        }
        if(i<j){ // swap only when i is less than j
            swap(arr[i], arr[j]); // swap the elements
        }
    }
}
int main(){
    int n = 5;
    int arr[10] = {2, -3, -1, 5, -4};
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
In the corrected code, we added an additional condition to check if i is less than 
j before swapping elements Also, we added an additional condition to check if i and j 
are still within the bounds of the array.
*/

//Wrong code ->
// #include<iostream>
// using namespace std;
// void moveNegative(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         while(arr[i]<0){ // swap when a positive element is encountered
//             i++;
//         }
//         while(arr[j]>0){ // swap when a negative element is encountered
//             j--;
//         }
//         swap(arr[i], arr[j]); // swap the elements
//     }
// }
// int main(){
//     int n = 5;
//     int arr[n] = {2, -3, -1, 5, -4};
//     moveNegative(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }