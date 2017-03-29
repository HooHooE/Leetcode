class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int plen = pattern.size();
        int slen = str.size();
        istringstream in(str);
        unordered_map<char, int> phash;
        unordered_map<string,int> shash;
        int i = 0;
        for(string word;in>>word;i++){
            //cout<<word;
            if(phash[pattern[i]] != shash[word]) return false;
            phash[pattern[i]] = shash[word] = i+1;
        }
        if(i != plen) return false;
        return true;
        
    }
};