vector<vector<int> > levelOrder(TreeNode *root) {
	vector<vector<int> > retVal;
	levelOrder(root, retVal, 0);
	reverse(retVal.begin(), retVal.end());
	return retVal;
}

void levelOrder(TreeNode* root, vector<vector<int> > &v, int currLevel) {

	if (root == NULL) return;

	//this step: apply for a new element of vector. Using v[1] without applying is illegal
	if (v.empty() || currLevel > (v.size() - 1)) {
		v.push_back(vector<int>());
	}
	
	// the idea is the traditional preorder tranversal, but record the curr_level
	// and save the data to its level.
	v[currLevel].push_back(root->val);

	levelOrder(root->left, v, currLevel + 1);
	levelOrder(root->right, v, currLevel + 1);
}