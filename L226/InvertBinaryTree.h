class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        TreeNode* tmp = left;
        root->left = right;
        root->right = tmp;
        return root;
    }
};