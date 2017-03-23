class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root->val == fmin(p->val,q->val) || root->val == fmax(p->val,q->val) || 
           root->val > fmin(p->val,q->val) && root->val < fmax(p->val,q->val)) return root;
        if(root->val > fmax(p->val,q->val)) root = lowestCommonAncestor(root->left,p,q);
        if(root->val < fmin(p->val,q->val)) root = lowestCommonAncestor(root->right,p,q);
        return root;
    }
};