class Solution {
public:
    void inorder(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;

        inorder(root->left, result);   // Left
        result.push_back(root->val);   // Root
        inorder(root->right, result);  // Right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }
};