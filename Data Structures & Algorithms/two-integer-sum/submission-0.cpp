class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; // {arr[i],i};
        vector<int>ans;
        for(int i = 0 ;i<nums.size();i++){
            int se = target - nums[i];

            if(mp.find(se) != mp.end()) {
                ans.push_back(mp[se]);
                ans.push_back(i);
            }
            else{
                mp[nums[i]]=i;
            }
        }

        return ans;
    }
};
