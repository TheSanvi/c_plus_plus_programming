
// 1382. Balance a Binary Search Tree
// Given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them.

// A binary search tree is balanced if the depth of the two subtrees of every node never differs by more than 1.

 #include <vector>
using namespace std;

// Assuming TreeNode is already defined in a header file
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    // Function to perform inorder traversal and store the values in a vector
    void inorderTraversal(TreeNode* root, vector<int>& nodes) {
        if (root == nullptr) return;
        inorderTraversal(root->left, nodes);
        nodes.push_back(root->val);
        inorderTraversal(root->right, nodes);
    }
    
    // Function to build a balanced BST from the sorted vector
    TreeNode* buildBalancedBST(vector<int>& nodes, int start, int end) {
        if (start > end) return nullptr;
        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(nodes[mid]);
        root->left = buildBalancedBST(nodes, start, mid - 1);
        root->right = buildBalancedBST(nodes, mid + 1, end);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nodes;
        inorderTraversal(root, nodes);  // Step 1: Get sorted node values
        return buildBalancedBST(nodes, 0, nodes.size() - 1);  // Step 2: Build balanced BST
    }
};
