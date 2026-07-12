class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char,int> mp; // position of the char

        for(int i = 0;i<keyboard.size();i++){
            mp[keyboard[i]] = i; // save the index;
        }
        int initialPosition = 0;
        int totalTime = 0;
        for(int i = 0;i<word.size();i++){
            totalTime += abs(initialPosition - mp[word[i]]);
            initialPosition = mp[word[i]];
        }

        return totalTime;
    }
};
