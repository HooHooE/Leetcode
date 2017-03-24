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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> left;
        queue<TreeNode*> right;
        
        //boundry check
        if(root == NULL) return true;
        if(!root->left && !root->right) return true;

        if(root->left) left.push(root->left);
        else return false;
        if(root->right) right.push(root->right);
        else return false;
        while(!left.empty() && !right.empty()){
            TreeNode *ltmp = left.front();
            TreeNode *rtmp = right.front();
            if(ltmp->val != rtmp->val) return false;
            left.pop();
            right.pop();
            if(ltmp->left) left.push(ltmp->left);
            if(rtmp->right) right.push(rtmp->right);
            if(left.size()!=right.size()) return false;
            
            if(ltmp->right) left.push(ltmp->right);
            if(rtmp->left) right.push(rtmp->left);
            if(left.size()!=right.size()) return false;
        }
        if(!left.empty() || !right.empty()) return false;
        return true;      
    }
};