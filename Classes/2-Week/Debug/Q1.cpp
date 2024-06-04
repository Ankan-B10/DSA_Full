#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the last index - ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
return 0;
}


//Debug code

/*void main(){
    int n;cin>>n;
    int8_t sum=0;
    for(int i=0;i<n;++i){
        sum+=i;
    }
    cout<<sum<<endl;
		return 0;
}
*/