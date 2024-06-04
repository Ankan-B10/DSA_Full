//Left Triangle star Pattern
#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    // size of the triangle
    int size = N;
    // loop to print the pattern
    for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}


//Debug code ->
/*
#include <iostream>
using namespace std;

int main() {
  // size of the triangle
  int size = N;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j < i; j++) {
      cout << "**";
    }
    cout << "\n";
  }
  return 0;
}
*/