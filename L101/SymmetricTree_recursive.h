class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode*right){
        if(!left && !right) return true;
        if(!left&&right || left&&!right) return false;
        //above. can be modified as
        //     if(left==null || right==null)
        //     return left==right;
        
        return (left->val == right->val) && isMirror(left->left,right->right) && isMirror(left->right,right->left);
    }
    
    
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        if(!root->left&& !root->right) return true;
        if(!root->left&&root->right || root->left&&!root->right) return false;
        return isMirror(root->left,root->right);
    }
};