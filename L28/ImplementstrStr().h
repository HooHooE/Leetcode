class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlen = haystack.size();
        int nlen = needle.size();
        if(nlen == 0) return 0;
        for(int i = 0; i<=hlen-nlen; i++) {
            for(int j = 0; j<nlen; j++){
                if(haystack[i+j] != needle[j]) break;
                if(j==nlen-1) return i;
            }
        }
        return -1;
    }
};