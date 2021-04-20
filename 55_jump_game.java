class Solution {
    public boolean canJump(int[] nums) {
         int max_reach=nums[0];
        if(nums.length==0) return false;
        
        
        
        for (int i=0; i<nums.length; i++){
           
            if(i+nums[i]>max_reach){
                max_reach=i+nums[i];
            }
           
            if(max_reach==i){
                break;
            }
           
            
          
           }
        return max_reach>=nums.length-1;
    }
}
