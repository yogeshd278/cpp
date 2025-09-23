#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
    unsigned int height;

    Node(int val) : value(val), left(nullptr), right(nullptr), height(1) {}
};

unsigned int GetHeight(Node* n) {
    return (n == nullptr) ? 0 : n->height;
}

Node* insert(Node* node, int value) {
    if (node == nullptr)
        return new Node(value);

    if (value < node->value)
        node->left = insert(node->left, value);
    else if (value > node->value)
        node->right = insert(node->right, value);
    else
        return node; // no duplicates

    // update height after insertion
    node->height = 1 + max(GetHeight(node->left), GetHeight(node->right));

    return node;
}

int main() {
    Node* root = nullptr;
    vector<int> arr = {12, 13, 17, 11, 28, 2, 39, 3};

    for (int value : arr) {
        root = insert(root, value);
        cout << "Inserted " << value << " -> root is now " << root->value 
             << " (height: " << root->height << ")" << endl;
    }

    return 0;
}
