class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,bool> mp ; // is element present or not

        for(auto x : arr){
            mp[x]=true;
        }

        int count = 0;
        for(auto x : arr){
            if(mp.find(x+1)!=mp.end()) {
                count++;
            }
        }

        return count;
    }
};
