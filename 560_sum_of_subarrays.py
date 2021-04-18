class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count=0
        _map= {}
        curr_sum=0
        if(len(nums)==0):
            return 0
       
        
        for n in range(len(nums)):
            curr_sum+=nums[n]
            if(curr_sum==k):
                count+=1
            if((curr_sum-k) in _map):
                count+=_map[curr_sum-k]
            if(curr_sum in _map):
                _map[curr_sum]+=1
            else:
                _map[curr_sum] =1
        return count; 
        
