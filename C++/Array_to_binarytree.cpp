#include <iostream>
#include <vector>

using namespace std;

// Function to perform postorder traversal on a binary tree given as an array
void postorder(vector<int>& arr, int i, vector<int>& res) {
    // Base case: if the current index is out of range, return
    if (i >= arr.size()) {
        return;
    }
    // Recursively traverse the left subtree
    postorder(arr, 2 * i + 1, res);//for binarry tree this is default formula

    // Recursively traverse the right subtree
    postorder(arr, 2 * i + 2, res);//for binary tree this is default formula

    // Visit the current node
    res.push_back(arr[i]);
}

//similarly we can create inorde and preorder by changing position of function call

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res;
    postorder(arr, 0, res);

    for (int val : res) {
        cout << val << " ";
    }

    return 0;
}
