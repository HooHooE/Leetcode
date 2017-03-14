class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1;
        int p2 = n-1;
        int id = m+n-1;
        while(p1>=0 && p2 >= 0){
            if(nums1[p1]>nums2[p2]){
                nums1[id--] = nums1[p1--];
            }
            else{
                nums1[id--] = nums2[p2--];
            }
        }
        if(p2>=0){
            for(;id>=0;id--){
                nums1[id] = nums2[id];
            }
        }
    }
};