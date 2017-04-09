#include<iostream>
#include<vector>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


#define INFN 2147483647; 
 vector<int> result;
 int max = 0;
 int pre = INFN;
 int curr_count = 0;
 void findEle(TreeNode *root) {
	 if (!root) return;
	 findEle(root->left);
	 if (root->val == pre) {
		 curr_count++;
		 if (curr_count == max) result.push_back(root->val);
		 if (curr_count > max) {
			 result.clear();
			 result.push_back(root->val);
			 max = curr_count;
		 }
	 }
	 else {
		 curr_count = 1;
		 if (max <= 1) {
			 result.push_back(root->val);
			 max = 1;
		 }
	 }
	 pre = root->val;
	 findEle(root->right);
 }
 vector<int> findMode(TreeNode* root) {
	 findEle(root);
	 return result;
 }
	
int main() {
		TreeNode *root = new TreeNode(3);
		root->left = new TreeNode(9);
		root->right = new TreeNode(20);
		root->right->left = new TreeNode(15);
		root->right->right = new TreeNode(7);
		vector<int> result = findMode(root);

		return 0;
	}



