#include<iostream>
using namespace std;
int main()
{
    int n, a, b, last;
    cout<<"Enter a number = ";
    cin>>n;
    b=a=n; //its need later
    //* count code
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    //* digit calculate
    int sum = 0;
    while (a!=0){
        last = a % 10 ; //for value
        a = a/10;
        int prod = 1;
        //for loop for multiplying last*last*last...
        for(int i=1; i<=count; i++){
            prod = prod * last;
        }
    sum = sum + prod;
    }
    if (sum == b )
        cout<<b<<" is armstrong number. ";
    else
        cout<<b<<" is not armstrong number. ";
return 0;
}