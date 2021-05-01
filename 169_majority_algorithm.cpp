class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       // sort(nums.begin(),nums.end());
       //  return nums[nums.size()/2];
        
        //by using moore's voting algorithm
        
        int idx=0;
        int count=1;
        
        for(int i=1; i<nums.size();i++){
            if(nums[i]==nums[idx]){
                count++;
            }else{
                count--;
            }
            if(count==0){
                idx=i;
                count=1;
            }
        }
       
      return nums[idx];
        
        
    }
};
