/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void sumOfLeftLeaves (TreeNode* root, int &sum){
        if(root->left == NULL && root->right == NULL) return;
        if(root->left != NULL) sumOfLeftLeaves(root->left,sum);
        if(root->left != NULL && root->left->right == NULL && root->left->left == NULL) sum += root->left->val;
        if(root->right != NULL) sumOfLeftLeaves(root->right,sum);
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root == NULL) return 0;
        sumOfLeftLeaves(root,sum);
        return sum;
    }
};