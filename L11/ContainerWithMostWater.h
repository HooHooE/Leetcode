class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int max = 0;
        int i,j;
        for(i = 0,j = len-1; i<j;){
            if(height[i]>height[j]) {
                max = fmax(max,height[j]*(j-i));
                j--;
            }else {
                max = fmax(max,height[i]*(j-i));
                i++;
            }
        }
        return max;
    }
};