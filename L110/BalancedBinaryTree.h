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
    int Depth(TreeNode* root){
        if(root == NULL) return 0;
        int l = Depth(root->left);
        if(l == -1) return -1;
        int r = Depth(root->right);
        if(r == -1) return -1;
        
        if(abs(l-r)>1) return -1;
        return fmax(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        return Depth(root) != -1;
    }
};

//The second method is based on DFS. 
//Instead of calling depth() explicitly for each child node, 
//we return the height of the current node in DFS recursion. 
//When the sub tree of the current node (inclusive) is balanced, 
//the function dfsHeight() returns a non-negative value as the height. 
//Otherwise -1 is returned. 
//According to the leftHeight and rightHeight of the two children, 
//the parent node could check if the sub tree
//is balanced, and decides its return value.