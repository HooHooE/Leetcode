class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        unordered_map<char,int> hash;
        int res = 0;
        int i = 0;
        int j = 0;
        for(int i =0; i<len;i++) {
            if(hash.find(s[i]) != hash.end()){
                j = fmax(j,hash[s[i]]+1);
            }
            hash[s[i]] = i;
            res = fmax(res,i-j+1);
        }
        return res;
    }
};