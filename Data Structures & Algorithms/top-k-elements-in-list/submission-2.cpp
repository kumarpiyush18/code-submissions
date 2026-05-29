class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counts;
        for(int  num : nums){
            counts[num]++;
        }

        // copy pairs to a vector
        vector<pair<int,int>> freqPairs(counts.begin(),counts.end());
        // sort the freqPairs based on the frequencey

        sort(freqPairs.begin(), freqPairs.end(),[](const pair<int,int>&a, const pair<int,int> &b) {
            return a.second > b.second; // compare frequencies
        });

        vector<int>ans;
        for(int i =0;i< k;i++) {
            ans.push_back(freqPairs[i].first);
        }

        return ans;
    }
};