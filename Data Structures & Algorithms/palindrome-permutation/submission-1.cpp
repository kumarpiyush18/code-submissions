class Solution {
public:
    bool canPermutePalindrome(string s) {
        
        if(s.size()==1 || s.size()==0) return true;

        unordered_map<char,int> mp ; // to store the frequency

        for(auto x : s){
            mp[x] ++;
        }

        int count = 0;

        if(s.size()%2==0){
            for(auto x : s){
                if(mp[x]%2!=0){
                    return false;
                }
            }
        }
        else{
            for(auto x : mp){
                if(x.second%2==1){
                    count++;
                    if(count > 1){
                        return false;
                    }
                }
            }
        }

        
        return true;



    }
};
