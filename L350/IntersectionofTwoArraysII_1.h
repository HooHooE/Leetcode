class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> result;
        if(!len1 || !len2) return result;
        
        unordered_map<int,int> hash;
        for(int i = 0;i<len1;i++){
            hash[nums1[i]]++;
        }
        unordered_map<int,int>::const_iterator it;
        for(int i = 0;i<len2;i++){
                if(hash[nums2[i]]!=0){
                    result.push_back(nums2[i]);
                    hash[nums2[i]]--;
                }
        }
        return result;
    }
};
//it cost O(m+n) time and O(m+n) space. faster.
//but when we use it to find the nums2[i], it only costs O(m) space. slower.
//if it is sorted, two pointers are used. its a lot easier.