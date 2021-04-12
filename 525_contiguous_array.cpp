class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> cache;
        
        if(nums.size()==0){return 0;}
        
       int count = nums[0] == 1 ? 1 : -1;
        
        cache[0]=-1;
        
        cache[count] = 0;
        
        int _max=0;
        
        for(int i=1; i<nums.size();i++){
            count = (nums[i]==1 ) ? count +1 : count-1;
              if(cache.find(count) != cache.end()){
            _max=std::max(_max,i-cache[count]);
        }else{
            cache[count]=i;
        }
    
        }
          return _max;
    }
};
