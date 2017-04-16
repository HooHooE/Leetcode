class Solution {
public:
    int minMoves(vector<int>& nums) {
        int len = nums.size();
        //find min
        int min = nums[0];
        for(int i = 1; i<len; i++){
            if(nums[i]<min) min = nums[i];
        }
        //calculate result
        int result = 0;
        for(int i = 0; i<len; i++) result += (nums[i]-min);
        return result;
    }
};
