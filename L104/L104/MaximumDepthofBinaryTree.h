class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return fmax(maxDepth(root->left),maxDepth(root->right))+1;
        
    }
};