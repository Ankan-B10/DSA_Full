#include<iostream>
using namespace std;
void TOH(int n, char source, char dest, char aux){
    if(n==1) //base case 
        cout<<source<<"--->"<<dest<<endl;
    else{
        TOH(n-1, source, aux, dest);
        cout<<source<<"--->"<<dest<<endl;
        TOH(n-1, aux, dest, source);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of disks = ";
    cin>>n;
    TOH(n, 'A', 'D', 'B'); // A=> Source,D= Destination,B= Aux
return 0;
}