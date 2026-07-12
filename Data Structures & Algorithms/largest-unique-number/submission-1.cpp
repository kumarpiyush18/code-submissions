class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto x : nums){
            mp[x]++;
        }

        int ans = -1;
        for(auto &[num,count] : mp){
            if(count == 1 && num > ans) ans = num;
        }

        return ans;
    }
};
