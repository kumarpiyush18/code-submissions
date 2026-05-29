class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";
        for(auto x : strs) {
            str += to_string(x.length()) + "#" + x;
        }

        return str;
    }

    vector<string> decode(string s) {

        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            result.push_back(s.substr(pos + 1, len));
            i = pos + 1 + len;
        }

        return result;
    }
};
