class Solution {
public:
    void sortedArrayToBST(TreeNode* &root,vector<int>& nums,int low, int high){
        if(low == high) return;
        int mid = low+ (high-low)/2;
        root = new TreeNode(nums[mid]);
        sortedArrayToBST(root->left,nums,low,mid);
        sortedArrayToBST(root->right,nums,mid+1,high);
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return NULL;
        TreeNode *root;
        sortedArrayToBST(root,nums,0,len);
        return root;
        
    }
};