class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto ch : s){
            if(isalnum(ch)){
                str += tolower(ch);
            }
        }

        int first = 0;
        int last = str.size()-1;
        while(first <= last){
            if(str[first]!=str[last]){
                return false;
            }

            first ++;
            last --;
        }


        return true;
    }
};
