// Function Overloading
#include<iostream>
using namespace std;
class Maths{
    public:
        int sum(int a, int b){
            cout<<"I am first signature"<<endl;
            return a+b;
        }
        int sum(int a, int b, int c){
            cout<<"I am second signature"<<endl;
            return a+b+c;
        }
        float sum(int a, float b){
            cout<<"I am third signature"<<endl;
            return a+b;
        }
};
int main()
{
    Maths M;
    cout<<M.sum(10,20)<<endl;
    cout<<M.sum(10,20,30)<<endl;
    cout<<M.sum(20,5.6f)<<endl;
return 0;
}