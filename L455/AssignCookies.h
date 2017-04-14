class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int glen = g.size();
        int slen = s.size();
        int childNum = 0;
        for(int i = 0; i < slen && childNum<glen ; i++){   //i is cookie index
                if(g[childNum]<=s[i]) childNum++;
        }
        return childNum;
    }
};