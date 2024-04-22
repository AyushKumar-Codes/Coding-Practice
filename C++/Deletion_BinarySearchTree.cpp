// You are using GCC
#include <iostream>
using namespace std;
struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, char data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    } else if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

Node* findMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, char data) {
    if(root == NULL) return root;
    else if(data < root->data) root->left = deleteNode(root->left,data);
    else if (data > root->data) root->right = deleteNode(root->right,data);
    else {
        // Case 1:  No child
        if(root->left == NULL && root->right == NULL) { 
            delete root;
            root = NULL;
        }
        //Case 2: One child 
        else if(root->left == NULL) {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL) {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        // case 3: 2 children
        else { 
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);
        }
    }
    return root;
}


void inorder(Node* root) {
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main() {
    int size;
    cin >> size;
    Node* root = NULL;
    char input, char_to_delete;
    while(size!=0) {
        cin >> input;
        root = insert(root, input);
        size--;
    } 
    cin >> char_to_delete;
    root = deleteNode(root, char_to_delete);
    inorder(root);
    cout << endl;
    return 0;
}