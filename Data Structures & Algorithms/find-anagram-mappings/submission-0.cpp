class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        unordered_map<int,int> mp;

        for(int i = 0;i<nums2.size();i++){
            mp[nums2[i]] = i;
        }

        for(int i = 0;i< nums1.size();i++){
            if (mp.find(nums1[i])!=mp.end()){
                result.push_back(mp[nums1[i]]);
            }
        }

        for(int n : result){
            cout << n << " ";
        }

        return result;
    }
};
