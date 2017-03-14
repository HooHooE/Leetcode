class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        int k1 = k%len;
        reverse(nums,0,len-1);
        reverse(nums,0,k1-1);
        reverse(nums,k1,len-1);
    }



	void reverse(vector<int> &nums, int begin, int end){
		int head = begin;
		int tail = end;
		int tmp;
		while(head < tail){
			tmp = nums[head];
			nums[head] = nums[tail];
			nums[tail] = tmp;
			head++;
			tail--;
		}
	}
};