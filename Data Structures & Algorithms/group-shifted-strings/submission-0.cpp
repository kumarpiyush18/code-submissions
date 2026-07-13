class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> group;

        for(string s : strings) {
            string key = getKey(s);
            group[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto const& [key,val] : group) {
            result.push_back(val);
        }

        

        return result;
    }

private:
    string getKey(string s) {
        string key ="";
        for(int i = 1 ; i  < s.size() ; i++) {
            int diff = (s[i] - s[i-1] + 26) % 26;
            key += to_string(diff) + ",";
        }

        return key;
    }
};
