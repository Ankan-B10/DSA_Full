#include<iostream>
using namespace std;
int main()
{


    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout<< s <<endl;
    next_permutation(s.begin(), s.end());
    cout<< s <<endl;
    next_permutation(s.begin(), s.end());
    cout<< s <<endl;

    string s2 = "bac";
    prev_permutation(s2.begin(), s2.end());
    cout<<"prev permutation of bac = "<< s2 <<endl;
return 0;
}