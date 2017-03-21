class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root, int &max){   //here use & for max
        if(root == NULL) return 0;
        int left = diameterOfBinaryTree(root->left,max);
        int right = diameterOfBinaryTree(root->right,max);
        max = (left+right)>max?left+right:max;   //update max
        return fmax(left,right)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
       int max = 0;
       diameterOfBinaryTree(root,max);
       return max;
    }
};