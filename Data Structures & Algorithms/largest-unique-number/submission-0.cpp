class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        map<int,int> freq;

        for(auto x : nums) {
            freq[x]++;
        }
        int ans = -1;
        for(auto x : freq){
            if(x.second==1){
                ans=x.first;
            }
        }

        return ans;


    }
};
