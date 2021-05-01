class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        idx=0;
        count=1;
        
        for num in range(1,len(nums)):
            if(nums[num]==nums[idx]):
                count+=1
            else:
                count-=1
            if(count==0):
                idx=num
                count=1
                
            
        return nums[idx]
                
        
