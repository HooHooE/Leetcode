class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while(n){
            int mode = (n-1)%26;
            result = char('A'+ mode)+result;
            n = (n-mode-1)/26;
        }
        return result;
    }
};