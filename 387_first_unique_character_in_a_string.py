class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        count=[0]*26;
        
        for c in s:
            count[ord(c) - ord('a')]+=1
            
            
        for i in range(len(s)):
            if(count[ord(s[i])-ord('a')]==1):
                return i
            
        return -1
        
