class Solution:
    def canJump(self, nums: List[int]) -> bool:
        max_reach=0
        if(len(nums)==1):
            return True
        
        for i in range(len(nums)):
           
            if(i+nums[i]>max_reach):
                max_reach=i+nums[i]
            if(max_reach==i):
                break
                
        if(max_reach>=len(nums)-1):
            return True
        else:
            return False
