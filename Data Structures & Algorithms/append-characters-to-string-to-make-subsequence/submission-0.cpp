class Solution {
public:
    int appendCharacters(string s, string t) {
        int x = rec(s, t, 0,0);

        if (x == -1) return 0;

        cout << "x:" <<x << "\n" <<"t-x:" <<t.size()-x;

        return t.size()-x;
    }


private:
    int rec(string &s, string &t,int i,int j) {

        if(j == t.size()) return j;
        if(i == s.size()) return j;

        if(s[i]==t[j]){
            return rec(s,t,i+1,j+1);
        }

        return rec(s,t,i+1,j);
    }
};