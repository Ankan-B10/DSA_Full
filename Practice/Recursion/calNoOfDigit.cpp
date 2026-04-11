#include<iostream>
using namespace std;

int fun(int n){
    if(n<=9){
        return 1; // base case
    }
    else{
        return 1+fun(n/10);
    }
}
int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int res = fun(n);
    cout<<"Count of the "<<n<<" is = "<<res;
    cout<<endl;
return 0;
}