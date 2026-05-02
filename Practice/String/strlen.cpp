#include<iostream>
using namespace std;
unsigned int myStrlen(const char *str){
    unsigned int count = 0;
    while (*str != '\0'){
        count++;
        str++;
    }
    return count;
}
int main()
{   
   char *p = "Ankan";
   int i;
   i=myStrlen(p);
   cout<<"Length of string is = "<<i<<endl;

return 0;
}