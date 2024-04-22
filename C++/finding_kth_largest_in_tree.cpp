// You are using GCC
#include <iostream>
#include<vector>
using namespace std;
vector <int> v;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};


// Function to build a BST from user input
TreeNode* buildBST() {
    int val;
    TreeNode* root = nullptr;

    while (true) {
        std::cin >> val;

        if (val == -1) {
            break;
        }

        if (root == nullptr) {
            root = new TreeNode(val);
        } else {
            // Insert the value into the BST
            TreeNode* current = root;
            while (true) {
                if (val < current->val) {
                    if (current->left == nullptr) {
                        current->left = new TreeNode(val);
                        break;
                    }
                    current = current->left;
                } else {
                    if (current->right == nullptr) {
                        current->right = new TreeNode(val);
                        break;
                    }
                    current = current->right;
                }
            }
        }
    }

    return root;
}

// Function to find the kth smallest element in the BST
int kthSmallest(TreeNode* root, int k) {
    if(root){
        v.push_back(root->val);
        kthSmallest(root->left,k);
        kthSmallest(root->right,k);
    }
    int temp;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i]>v[j]){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    return v[k-1];
    
    
}

int main() {
    TreeNode* root = buildBST();

    int k;
    std::cin >> k;

    int kth_smallest = kthSmallest(root, k);
    std::cout << kth_smallest;

    // Clean up memory
    delete root;

    return 0;
}