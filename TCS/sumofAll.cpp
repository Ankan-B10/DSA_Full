#include<iostream>
using namespace std;

int sumAll(int a[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum+a[i];
    }
    return sum;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 10};
    int size = sizeof(a)/ sizeof(a[0]);
    int ans = sumAll(a, size);
     cout<<"Sum of array elements = "<<ans<<endl;
return 0;
}