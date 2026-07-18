class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> temp;

        for(auto s : strs){
            string sortedKey = s;
            sort(sortedKey.begin(), sortedKey.end());
            temp[sortedKey].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto x : temp){
            ans.push_back(x.second);
        }

        return ans;
    }
};
