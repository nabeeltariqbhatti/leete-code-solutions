class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count =0
        
        for jewel in stones:
            if jewel in jewels:
                count+=1
        
        return count
        
