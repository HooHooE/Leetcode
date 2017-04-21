class Solution {
public:

    int maxLength= 0;
    int start = 0;
    
    string longestPalindrome(string s) {
        int len = s.size();

        for(int i = 0; i<len; i++){
            extand(s,i,i); //for odd
            extand(s,i,i+1); //for even
        }
        cout<<start<<endl;
        cout<<maxLength<<endl;
        return s.substr(start,maxLength);
    }

    void extand(string s, int i1, int i2) {
        int len = s.size();
        int l = i1;
        int r = i2;
        while(l>=0 && r<len && s[l] == s[r]) {
                l--;
                r++;
        }
        if (maxLength < r-l-1) {
            maxLength = r-l-1;
            start = l+1;
        }
    }
};