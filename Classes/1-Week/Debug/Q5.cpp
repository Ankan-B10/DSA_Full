//Check given number is Prime or not.
#include<iostream>
using namespace std;
int main(){
	int n;
    cout<<"Enter a value - ";
	cin >> n;
	bool isPrime = true;
    for(int i=2;i<n;i++){
      if(n%i == 0){
          isPrime = false; break;
      }
  }
	if(isPrime){
		cout<<"Prime"<<endl;	
	}
	else{
		cout<<"Not Prime"<<endl;	
	}
  return 0;
}


/*  debug code ->
    int main(){
	int n;
	cin >> n;
	bool isPrime = true;
  for(int i=2;i<n;i++){
      if(i%n == 0){
          isPrime = false; break;
      }
  }
	if(isPrime){
		cout<<"Prime"<<endl;	
	}
	else{
		cout<<"Not Prime"<<endl;	
	}
  return 0;
}
*/