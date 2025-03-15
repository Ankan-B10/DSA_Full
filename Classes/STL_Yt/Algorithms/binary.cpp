#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5};

    cout<<"binary search STL ->"<<endl;

    // binary_search(vec.begin(), vec.end(), target)
    cout<<binary_search(vec.begin(), vec.end(), 4)<<endl;

    cout<<binary_search(vec.begin(), vec.end(), 10)<<endl;
return 0;
}