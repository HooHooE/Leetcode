class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        if(slen != tlen) return false;
        
        //unordered_map<char,int> shash;
        int shash[256]={0};
        //unordered_map<char,int> thash;
        int thash[256]={0};
        
        for(int i = 0; i<slen; i++){
            if(shash[s[i]] != thash[t[i]]) return false;
            shash[s[i]] = thash[t[i]] = i+1;
        }
        return true;
    }
};