class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         unordered_map<int,int>count;
         for(int num : nums) {
            count[num]++;
         }

         for (auto x : count) {
            if(x.second > 1) {
                return true;
            }
         }

         return false;
    }
};