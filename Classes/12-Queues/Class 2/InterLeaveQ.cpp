#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void interleaveQueue(queue<int> &q){
    //step 1: separte both halves
    int n = q.size();
    if(n == 0)
        return;
    int k = n/2;
    int count = 0;
    queue<int> q2; // q2 is new queue

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count == k)
            break; // when n/2 reached
    }

    //step 2: interleaving start
    while(!q.empty() && !q2.empty()){
        int firstEle = q2.front();
        q2.pop();

        q.push(firstEle); //push it input wala queue

        int secondEle = q.front();
        q.pop();

        q.push(secondEle);
    }

    //odd length -> 1 ele left
    if(n&1){
        int lastEle = q.front();
        q.pop();
        q.push(lastEle);
    }
}

int main() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  q.push(9);

  interleaveQueue(q);
  
  cout << "printing Queue after reversing recursively" << endl;
  while(!q.empty()) {
          cout << q.front() << " ";
          q.pop();
  }
  cout << endl;



  return 0;
}