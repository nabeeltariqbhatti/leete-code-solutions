class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        ld=num%10
        
        if(ld==3 or ld==7 or ld==2 or ld==8):
            return False
        l=1
        r=num
        while(l<=r):
            mid=int(l+(r-l)/2)
            sq=mid*mid;
            if(sq==num):
                return True
            elif(sq<num):
                l=int(mid+1)
            else:
                r=int(mid-1)
        return False
        
