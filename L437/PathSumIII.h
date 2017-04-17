class Solution {
public:
    int result = 0;
    void getSum(TreeNode *root, int tmpSum, int sum){
        if(root == NULL) return;
        int newSum = root->val + tmpSum;
        if(newSum == sum) result++;
        getSum(root->left,newSum,sum);
        getSum(root->right,newSum,sum);
        return;
    }
    int pathSum(TreeNode* root, int sum){
        if(root == NULL) return 0;
        getSum(root,0,sum);
        pathSum(root->left,sum);
        pathSum(root->right,sum);
        return result;
    }
};



//hash method
class Solution {
public:

int pathSum(TreeNode *root, int sum) {
	unordered_map<int,int> preSum;
	preSum[0] = 1;
	return helper(root, 0, sum, preSum);
}

int helper(TreeNode *root, int currSum, int target, unordered_map<int,int> &preSum) {
	if (root == NULL) {
	return 0;
	}

	currSum += root->val;
	int res = preSum[currSum - target];
	preSum[currSum]++;

	res += helper(root->left, currSum, target, preSum) + helper(root->right, currSum, target, preSum);
	preSum[currSum]--;
	return res;
}
};