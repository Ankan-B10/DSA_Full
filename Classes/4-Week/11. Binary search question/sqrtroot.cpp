#include<iostream>
using namespace std;
int findsqt(int num){
    int s=0;
    int e=num;
    int mid=s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid>num){
            // left search
            e=mid-1;
        }
        else{
            // ans store
            ans=mid;
            // right search
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    int num;
    cout<<"Enter a number=";
    cin>>num;
    int ans = findsqt(num);
    cout<<"ans is ="<<ans<<endl;

    int precison;
    cout<<"Enter the number of floating digit in precison =";
    cin>>precison;

    double step=0.1;
    double finalans=ans;
    for(int i=0;i<precison;i++){
        for(double j=finalans; j*j<=num;j=j+step){
            finalans=j;
        }
        step=step/10;
    }

    cout<<"final ans ="<<finalans;
}