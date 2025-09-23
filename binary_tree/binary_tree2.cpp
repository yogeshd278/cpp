#include <iostream>
#include <vector>

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val):
        value(val),
        left(nullptr),
        right(nullptr) {}
};

Node* insert(Node* node, int value) {
    if (node == nullptr) {
        return new Node(value);
    }

    if (value < node->value) {
        node->left = insert(node->left, value);
    } else if(value > node->value) {
        node->right = insert(node->right, value);
    }

    return node;

}

int main() {
    Node* root = nullptr;
    vector<int> arr = {1,2,4,5,3,6};

    for (int value : arr) {
        root = insert(root, value);

        std::cout << "node " << root << std::endl;
    }

    return 0;
}