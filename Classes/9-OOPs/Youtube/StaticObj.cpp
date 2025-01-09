#include<iostream>
using namespace std;

class ABC{
public:
    ABC(){
        cout<<"constructor\n";
    }
    ~ABC(){
        cout<<"destructor\n";
    }
};


int main()
{
    if(true){
        ABC obj;
    }

    cout<<"1. end of main func\n";

    if(true){
      static ABC obj;
    }
    cout<<"2. end of main func\n";
return 0;
}