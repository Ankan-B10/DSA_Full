#include<iostream>
using namespace std;
int main() {
    char name[100];
    cout<<"Enter your name ="<<endl;

    // cin>>name;
    // name[0]='a';
    // name[2]='b';
    // cout<<"Enter char ="<<endl;
    // cin>>name[1];
 
   // name[0]<<name[1]<<name[2]<<endl;
//    for(int i=0;i<7;i++){
//     cout<<"index ="<< i <<" value ="<<name[i]<<endl;
//    }
//    int value=(int)name[5];
//    cout<<"value is ="<<value<<endl;
cin.getline(name,50);
cout<<" name="<<name;




}