class Solution:
    def findMin(self, nums: List[int]) -> int:
        l = 0
        r = len(nums)-1
        while(l < r):
            mid = int(l + (r-l)/2)
            if(nums[mid] > nums[r]):
                l = mid+1
            elif(nums[mid] < nums[r]):
                r = mid
            else:
                return nums[r];
    
        return nums[l];
        
