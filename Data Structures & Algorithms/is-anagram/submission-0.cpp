class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        vector<char>vs(26);
        vector<char>vt(26);

        for(int i = 0;i<s.size() ;i++) {
            vs[s[i]-'a'] ++;
            vt[t[i]-'a'] ++;
        }


        return vs == vt;
    }
};
