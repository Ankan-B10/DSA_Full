#include<iostream>
using namespace std;
int main()
{
    int n, a,b, prod;
    cout<<"Enter the value of a and b = ";
    cin>>a>>b;
    for(int n=a; n<=b; n++){
        prod = 1;
        for(int i=1; i<=n; i++){
            prod = prod*i;
        } 
        cout<<"Factorial of "<<n<<" is -> "<<prod<<endl;
    }
return 0;
}