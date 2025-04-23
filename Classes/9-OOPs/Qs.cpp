#include<iostream>
using namespace std;

class A{
    public:
        static int x;
        A(){
            x++;
        }

        //destructor code
        ~A(){
            x--;
        }

};

int A::x = 0;

int main()
{

    A a, b; //* local ---> stack
    A c, d, e;

    //* dynamic ---> heap

    //dynamic -> C style
    // A* ptr = (A*)malloc(sizeof(A)); //allocates memory, doesnt call constructor

    //! C++ style memory allocates
    A* ptr = new A; //! constructor as well

    // free(ptr); //C style way -> doesn't call the destructor

    delete ptr; //! C++ style

    cout << A::x << endl;
return 0;
}