class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:

        if(len(s) > len(t)):
            return False
        if not s:
            return True
        count = 0
        for i in t:
            if count < len(s) and i == s[count]:
                count+=1
                continue
        print(count)
        if count == len(s):
            return True
        return False
