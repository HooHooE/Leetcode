class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int index = len-1;
        
        while(index >= 0 && s[index] == ' ') index--;
        if(index < 0) return 0;
        
        int word = index-1;
        while(word >= 0 && s[word] != ' ') word--;
        return index-word;
    }
};