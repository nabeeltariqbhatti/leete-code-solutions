class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        
        _mag=Counter(magazine) #hasmap
        
        
        for c in ransomNote:
            if(_mag[c]==0):
                return False
            else:
                _mag[c]-=1
                
        return True
