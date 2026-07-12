class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int n = s.size();
        int net_shift = 0;

        for(auto x : shift){
            if(x[0]==0){
                net_shift -= x[1];
            }
            else{
                net_shift += x[1];
            }
        }
        net_shift = net_shift % n;

        if (net_shift < 0) {
            net_shift += n; 
        }

        return s.substr(n - net_shift) + s.substr(0, n - net_shift);

    }
};
