class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int len = nums.size();
        int *d = new int[len];
        d[0] = 0;
        int max = 0;
        for(int i = 1; i<len; i++){
            d[i] = (d[i-1] > 0) ? nums[i] - nums[i-1] + d[i-1] : nums[i] - nums[i-1]; 
            if(max < d[i]) max = d[i];
        }
        return max;
    }
};
