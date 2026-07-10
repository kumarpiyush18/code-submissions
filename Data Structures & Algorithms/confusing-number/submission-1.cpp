class Solution {
public:
    bool confusingNumber(int n) {
        
        while (n) {
            int x = n%10;
            n= n/10;
            if(x==6 || x == 8 || x ==9)
                return true;
        }

        return false;
    }
};
