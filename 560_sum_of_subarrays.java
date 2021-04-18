class Solution {
    public int subarraySum(int[] nums, int k) {
       if(nums.length==0) return 0;
        
        int count=0;
        
       HashMap<Integer,Integer> _map= new HashMap<Integer,Integer>();
        
        int curr_sum=0;
       for(int n: nums){
           curr_sum+=n;
           
           if(curr_sum==k){
               count++;
           }
           
           if(_map.containsKey(curr_sum-k)){
               count+=_map.get(curr_sum-k);
           }
           
           if(_map.containsKey(curr_sum)){
               int val= _map.get(curr_sum)+1;
               _map.replace(curr_sum,val);
           }else
           {
               _map.put(curr_sum,1);
           }
       }
        return count; 
    }
}
