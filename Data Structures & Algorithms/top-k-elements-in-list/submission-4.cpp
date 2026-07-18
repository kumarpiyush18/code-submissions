class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(int num : nums) {
            count[num]++;
        }

        vector<vector<int>>bucket(nums.size()+1);
        for(auto x : count) {
            int element = x.first;
            int freq= x.second;
            bucket[freq].push_back(element);
        }

        vector<int>result;
        for(int i = bucket.size()-1; i >= 0; i--){
            for(int num : bucket[i]){
                result.push_back(num);

                if(result.size()==k) {
                    return result;
                }
            }
        }


        return result;

        
    }
};
