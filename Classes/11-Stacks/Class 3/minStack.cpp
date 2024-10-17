#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class MinStack {
public:
    vector< pair<int,int> > st;   
    MinStack() {}

    void push(int val) {
        if(st.empty()) {
            pair<int,int> p = make_pair(val, val);
            st.push_back(p);
        }
        else {
            pair<int,int> p;
            p.first = val;
            p.second = min(val, st.back().second);
            st.push_back(p);
        }
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        return st.back().first;
    }

    int getMin() {
       return st.back().second;
    }
};

int main() {
    MinStack s;
    s.push(3);
    s.push(5);
    cout << "Minimum: " << s.getMin() << endl;
    s.push(2);
    s.push(1);
    s.push(9);
    s.pop();
    cout << "Top: " << s.top() << endl;
    cout << "Minimum: " << s.getMin() << endl;
    return 0;
}
