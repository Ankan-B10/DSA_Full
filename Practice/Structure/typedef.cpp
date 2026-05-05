#include<iostream>
#include<cstring>
using namespace std;
typedef struct stu{
    int Roll;
    char name[20];
} Ankan;
int main()
{
    Ankan s;
    s.Roll=10;
    // Using strcpy to copy string into character array
    strcpy(s.name,"Rudra"); 
    cout<<"Roll: "<<s.Roll<<endl;
    cout<<"Name: "<<s.name<<endl;
return 0;
}