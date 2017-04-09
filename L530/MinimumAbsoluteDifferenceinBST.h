#define INFN 2147483647;
class Solution {
public:
    int min = INFN;
    int pre = INFN;
    int getMinimumDifference(TreeNode* root) {
	    if(!root) return min;
	    getMinimumDifference(root->left);
	    min = fmin(min,abs(root->val - pre));
	    pre = root->val;
	    getMinimumDifference(root->right);
	    return min;
    }
};