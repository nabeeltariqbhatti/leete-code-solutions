# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        s=1
        e=n
        while(s<n):
            mid=int(s+(e-s)/2)
            if(isBadVersion(mid)):
                e=mid
            
            else:
                s=mid+1
                
        
        return s
    
    
        
