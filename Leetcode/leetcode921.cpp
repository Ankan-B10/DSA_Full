#include <iostream>
#include <stack>
#include <string>
using namespace std;

int minAddToMakeValid(string s) {
    stack<char> stack;
    for (int i = 0; i < s.size(); ++i) {
        char x = s[i];
        if (!stack.empty() && stack.top() == '(' && x == ')')
        {
            stack.pop();
        }  
        else{
        stack.push(x);
    }
}
    return stack.size();
}

int main() {
    cout<<"Output is - "<<endl;
    cout << minAddToMakeValid("()()))") << endl; // Example usage
    return 0;
}