//Longest Palindrome
class Solution {
public:
    int longestPalindrome(string s) {
        int len = s.size();
        unordered_set<char> set;
        int count = 0;
        
        for(int i = 0; i<len; i++){
            if(set.count(s[i])){
                set.erase(s[i]);
                count++;
            }
            else{
                set.insert(s[i]);
            }
        }
        
        if(!set.empty()) return 2*count+1;
        else return 2*count;
    }
};