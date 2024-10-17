#include <iostream>
#include <stack>
#include <string>
#include <algorithm> 

using namespace std;

class Solution {
public:
    stack<int> st;
    int maxLen;

    Solution() {
        maxLen = 0;
        st.push(-1);  // Push a sentinel value
    }

    int longestValidParentheses(string s) {
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(') {
                st.push(i);
            } 
            else {
                st.pop();
                if (st.empty()) {
                    st.push(i);  // Update base index for valid parentheses substring
                } 
                else {
                    int len = i - st.top();  // Calculate the length of the valid parentheses
                    maxLen = max(maxLen, len);
                }
            }
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    string s = "(()))())(";  // Example input
    cout << "Longest Valid Parentheses: " << sol.longestValidParentheses(s) << endl;
    return 0;
}
