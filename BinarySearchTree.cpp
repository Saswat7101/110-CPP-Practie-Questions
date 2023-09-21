// 102. Implement a binary search tree.

#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode *root;
    
    TreeNode *insertRecursive(TreeNode *current, int value) {
        if (!current) {
            return new TreeNode(value);
        }
        
        if (value < current->data) {
            current->left = insertRecursive(current->left, value);
        } else if (value > current->data) {
            current->right = insertRecursive(current->right, value);
        }
        
        return current;
    }
    
    void inorderTraversal(TreeNode *current) {
        if (!current) {
            return;
        }
        
        inorderTraversal(current->left);
        cout << current->data << " ";
        inorderTraversal(current->right);
    }
    
public:
    BinarySearchTree() : root(nullptr) {}
    
    void insert(int value) {
        root = insertRecursive(root, value);
    }
    
    void displayInorder() {
        inorderTraversal(root);
        cout << endl;
    }
    
    ~BinarySearchTree() {
        // Implement tree deletion
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);
    
    bst.displayInorder();
    
    return 0;
}