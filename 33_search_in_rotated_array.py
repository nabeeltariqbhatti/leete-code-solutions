class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n=len(nums);
        if(n==0):
            return -1
        left=0
        right=n-1
        
        while(left<right ):
            mid=int(left+(right-left)/2)
            if(nums[mid]>nums[right]):
                left=mid+1
            else:
                right=mid
                
        if(target<=nums[n-1]):
            return self.binary_search(nums,target,left,len(nums)-1)
        else:
            return self.binary_search(nums,target,0,left-1)
        
        
        
    def binary_search(self, nums: List[int], target: int, left:int, right:int)->int:
        while(left<=right):
            
            mid=int(left+(right-left)/2)
            if(target==nums[mid]):
                return mid
            
            if(target<nums[mid]):
                 right=mid-1
            else:
                 left=mid+1
            
        
        return -1;
    
           
       
