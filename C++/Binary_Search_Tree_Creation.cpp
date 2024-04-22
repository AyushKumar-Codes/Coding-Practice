// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x){
        data=x;
        left=nullptr;
        right=nullptr;
    }
};
//This insertNode Function is use to create Binary Search Tree
Node* insertNode(struct Node* root, int data) {
    
   if(root==nullptr){
       return new Node(data);
   }
   if(data<root->data){
       root->left=insertNode(root->left,data);
   }
   else{
       root->right=insertNode(root->right,data);
   }
   return root;
   
}

//Function to perform the inorder traversal
void inorderTraversal(struct Node* root) {
    
   if(root){
       inorderTraversal(root->left);
       cout<<root->data<<" ";
       inorderTraversal(root->right);
   }
   
}

int main() {
    struct Node* root = NULL;
    int n, data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insertNode(root, data);
    }
    inorderTraversal(root);
    return 0;
}


//Deleteing leafnode
// You are using GCC
#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int key) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = key;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

TreeNode* insert(TreeNode* root, int key) {
    if (root == nullptr) return createNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

TreeNode* deleteLeafNodes(TreeNode* root) {
    if (root == nullptr) return nullptr;
    if (root->left == nullptr && root->right == nullptr) {
        free(root);
        return nullptr;
    }
    root->left = deleteLeafNodes(root->left);
    root->right = deleteLeafNodes(root->right);
    return root;
}
void printInOrder(TreeNode* root){
    if(root){
        printInOrder(root->left);
        cout<<root->data;
        printInOrder(root->right);
    }
}

int main() {
    int N;
    cin >> N;

    TreeNode* root = nullptr;
    
    for (int i = 0; i < N; i++) {
        int key;
        cin >> key;
        root = insert(root, key);
    }

    root = deleteLeafNodes(root);
    
    if (root == nullptr) {
        cout << "Empty tree";
    } else {
        printInOrder(root);
        cout << endl;
    }

    return 0;
}

//finding depth of BST
// You are using GCC
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
};

Node* newNode(int item) {
	Node* temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

int findDepth(Node* root, int x) {
    int depth = 0;
    Node* temp = root;
    while (temp != nullptr) {
        if (temp->data > x) {
            temp = temp->left;
        } else if (temp->data < x) {
            temp = temp->right;
        } else {
            return depth;
        }
        depth++;
    }
    return -1;
}

int main() {
	Node* root = newNode(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		if (i == 0) {
			root->data = value;
		} else {
			Node* current = root;
			while (true) {
				if (value < current->data) {
					if (current->left == nullptr) {
						current->left = newNode(value);
						break;
					}
					current = current->left;
				} else if (value > current->data) {
					if (current->right == nullptr) {
						current->right = newNode(value);
						break;
					}
					current = current->right;
				} else {
					break;
				}
			}
		}
	}

	int k;
	cin >> k;
	cout << findDepth(root, k) << "\n";
	return 0;
}
