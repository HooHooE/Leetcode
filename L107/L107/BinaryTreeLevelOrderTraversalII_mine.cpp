#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrderBottom(TreeNode* root) {
	queue<TreeNode*> queue;
	stack<vector<int>> tmp; //Since nodes are printed in reverse, stack is needed.
	vector<vector<int>> result; //final result
	
	if (root == NULL) return result; //boundry check
	
	queue.push(root);
	tmp.push({ root->val });
	while (!queue.empty()) {
		vector<int> cur_val;
		int i = queue.size(); //here is the tip for this method. 
							  //To find how many leaves in current level
   		
		for (;i > 0;i--) {    // and just save vals in current level.
			TreeNode *cur_root = queue.front();
			queue.pop();
			if (cur_root->left != NULL) {
				queue.push(cur_root->left);
				cur_val.push_back(cur_root->left->val);
			}
			if (cur_root->right != NULL) {
				queue.push(cur_root->right);
				cur_val.push_back(cur_root->right->val);
			}
		}
		if (cur_val.size() > 0) tmp.push(cur_val);
	}
	while (!tmp.empty()) {
		result.push_back(tmp.top());
		tmp.pop();
	}
	return result;
}

int main() {
	TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);
	vector<vector<int>> result = levelOrderBottom(root);

	return 0;
}