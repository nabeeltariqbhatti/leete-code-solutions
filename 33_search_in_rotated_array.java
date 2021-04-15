class Solution {
    public int search(int[] nums, int target) {
     
        // for(int i=0;i<nums.size();i++){
        //     if(target==nums[i]){
        //         return i;
        //     }
        // }
        // return -1;
        int n=nums.length;
        if(n==0)return -1;
        int left=0;
        int right=n-1;
        
        while(left<right ){
                int mid=left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }else{
                right=mid;
            }
          
        }
          if(target<=nums[nums.length-1]){
                return binary_search(nums,target,left,nums.length-1);
            }else{
                return binary_search(nums,target,0,left-1);
            }
       
    }
    int binary_search(int[] nums, int target, int left, int right)
    {
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(target==nums[mid]){
                return mid;
            }
            if(target<nums[mid]){
                 right=mid-1;
            }else{
                 left=mid+1; 
            }
        }
    return -1;
    }
}
