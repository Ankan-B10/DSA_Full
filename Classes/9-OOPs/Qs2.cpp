#include<iostream>
using namespace std;

class A{
    public:
        static int x;
        A(){
            // x++;
        }

        //destructor code
        ~A(){
            // x--;
        }

        //! Operator Overloading
        void* operator new(size_t sz){
            x++;
            return ::operator new(sz); // returns memory from global new
        }
};

int A::x = 0;

int main()
{

    A a, b;     //* local ---> stack
    A c, d, e;  //* local ---> stack

    //* dynamic ---> heap

    //need to incre counter when creating heap
    //! solution -> Operator Overloading

    //! C++ style memory allocates
    A* ptr = new A;   //* heap store
    A* ptr2 = new A;  //* heap store


    cout << A::x << endl;

return 0;
}