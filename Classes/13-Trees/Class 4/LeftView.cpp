#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree() {
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();

    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}

void printLeftView(Node* root, vector<int>& ans, int level) {
    if (root == NULL)
        return;

    if (level == ans.size()) {
        ans.push_back(root->data);
    }

    // First go left, then right
    printLeftView(root->left, ans, level + 1);
    printLeftView(root->right, ans, level + 1);
}

int main() {
    Node* root = buildTree();
    vector<int> ans;
    int level = 0;
    printLeftView(root, ans, level);

    cout << "Printing the Left view = " << endl;
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
