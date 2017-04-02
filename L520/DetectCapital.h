class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        if(len == 0 || len == 1) return true;
        bool flag = true; //true for lower case; google or Google.
        if(int(word[1]-'A')>=0 && int(word[1]-'A')<26) flag = false; //false for uppercase GOOGLE. 
        if(!flag && (word[0]-'a')>=0 && (word[0]-'a')<26) return false; //gOOGLE is false.

        int i = 1;
        if(flag){
            while(i < len){
                if((word[i]-'a')<0 || (word[i]-'a')>=26) return false;
                i++;
            } 
        }
        else{
            while(i < len) {
                if((word[i]-'A')<0 || (word[i]-'A')>=26) return false;
                i++;
            }
        }
        return true;
    }
};