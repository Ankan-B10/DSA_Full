#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>vec = {1,2,3,4,5};

    vector<int>::iterator it;

    for(it = vec.begin(); it != vec.end(); it++){
        cout << *(it) <<" ";
    }
    cout<<endl;
    
    cout<<"reverse code-> ";
    vector<int>v = {1,2,3,4,5};

    vector<int>::reverse_iterator i;

    for(i = v.rbegin(); i != v.rend(); i++){
        cout << *(i) <<" ";
    }
    cout<<endl;

    cout<<"reverse code using auto -> ";

    for (auto j = vec.rbegin(); j != vec.rend(); j++)
    {
        cout<< *(j) <<" ";
    }
    
    cout<<endl;



return 0;
}