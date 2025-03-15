#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n = 15;

    cout<< __builtin_popcount(n)<<endl;

    cout<<"long int use l in end -> "<<endl;
    long int n2 = 15;
    cout<< __builtin_popcountl(n2)<<endl;

    cout<<"long long int use ll in end -> "<<endl;
    long long int n3 = 15;
    cout<< __builtin_popcountll(n3)<<endl;
return 0;
}