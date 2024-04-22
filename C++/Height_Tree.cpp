// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    } else {
        Node* cur;
        if (data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
        } else {
            cur = insert(root->right, data);
            root->right = cur;
        }
        return root;
    }
}

void postOrder(Node* root)
{
    if(root){
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    }
}

int getHeight(Node* root) 
{
if (root == NULL)
        return -1;// this could be 0 or -1 . o means first node is 1st level and -1 means 1st node is 0th level.
    else {
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}

int main() {
    Node* root = nullptr;

    int n;
    int data;

    cin >> n;

    while (n-- > 0) {
        cin >> data;
        root = insert(root, data);
    }

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << "\nHeight of the tree: " << getHeight(root) << endl;

    return 0;
}

//find the depth of tree
#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to calculate the depth of a specific node in a binary tree
int getNodeDepth(TreeNode* root, int target, int depth = 0) {
    if (root == nullptr) {
        return -1; // Node not found
    }

    if (root->data == target) {
        return depth;
    }

    int leftDepth = getNodeDepth(root->left, target, depth + 1);
    int rightDepth = getNodeDepth(root->right, target, depth + 1);

    return max(leftDepth, rightDepth);
}

// Function to calculate the height of a binary tree
int getHeight(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return 1 + max(leftHeight, rightHeight);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int targetNode = 5; // Node for which we want to find the depth
    int depth = getNodeDepth(root, targetNode);
    if (depth != -1) {
        cout << "Depth of node " << targetNode << ": " << depth << endl;
    } else {
        cout << "Node " << targetNode << " not found in the tree." << endl;
    }

    int treeHeight = getHeight(root);
    cout << "Height of the tree: " << treeHeight << endl;

    return 0;
}

