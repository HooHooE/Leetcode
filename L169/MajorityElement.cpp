Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int target = nums[0];
        int max = 1;
        for(int i = 1; i<len; i++){
            if(nums[i] == target){
                max++;
            }
            else{
                max--;
                if(max == 0){
                    target = nums[i];
                    max = 1;
                }
            }
        }
        return target;
    }
};