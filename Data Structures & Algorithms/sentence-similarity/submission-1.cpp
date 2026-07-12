class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if( sentence1.size() != sentence2.size())
            return false;
        
        unordered_map<string, unordered_set<string>> similar;
        for (auto& p : similarPairs) {
            similar[p[0]].insert(p[1]);
            similar[p[1]].insert(p[0]);
        }


        for (int i = 0; i < sentence1.size(); ++i) {
            if (sentence1[i] == sentence2[i]) continue;
            if (similar[sentence1[i]].count(sentence2[i])) continue;
            return false;
        }
        return true;

    }
};
