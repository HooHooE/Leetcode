class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int flen = findNums.size();
        int len = nums.size();
        vector<int> result;
        if(flen == 0) return result;
        stack<int> reserve;
        unordered_map<int,int> observe;
        reserve.push(nums[0]);
        for(int i = 1; i < len; i++){
            if(nums[i] < reserve.top()) reserve.push(nums[i]);
            else {
                while(!reserve.empty() && reserve.top() < nums[i]){
                    observe[reserve.top()] = nums[i];
                    reserve.pop();
                }
                reserve.push(nums[i]);
            }
        }
        while(!reserve.empty()){
            observe[reserve.top()] = -1;
            reserve.pop();
        }
        for(int i = 0; i<flen; i++) result.push_back(observe[findNums[i]]);
        return result;
    }
};