class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(auto s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s);
        }

        vector<vector<string>> result;
        for(auto x : res) {
            result.push_back(x.second);
        }

        return result;
    }
};
