class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        if(slen != tlen) return false;
        int hash[26] = {0};
        for(int i = 0; i<slen; i++) hash[s[i]-'a']++;
        for(int i = 0; i<tlen; i++){
            hash[t[i]-'a']--;
            if(hash[t[i]-'a'] < 0) return false;
        }
        return true;
        
        
    }
};