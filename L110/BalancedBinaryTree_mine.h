class Solution {
public:
    int maxDepth(TreeNode* root){
        if(root == NULL) return 0;
        return(fmax(maxDepth(root->left),maxDepth(root->right))+1);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(!isBalanced(root->left)) return false;
        int l = maxDepth(root->left);
        if(!isBalanced(root->right)) return false;
        int r = maxDepth(root->right);
        if(abs(l-r)>1) return false;
        else return true;
    }
};

// it's a O(N^2)solution because each node called maxDepth once.