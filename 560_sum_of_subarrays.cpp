class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==0) return 0;
        
        int count=0;
        
        unordered_map<int,int> _map;
        
        int curr_sum=0;
       for(int n: nums){
           curr_sum+=n;
           
           if(curr_sum==k){
               count++;
           }
           
           if(_map.find(curr_sum-k) != _map.end()){
               count+=_map[curr_sum-k];
           }
           
           if(_map.find(curr_sum)!=_map.end()){
               _map[curr_sum] +=1;
           }else
           {
               _map[curr_sum]=1;
           }
       }
        return count;
    }
};
