class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
       make_heap(stones.begin(),stones.end());
        
        while(stones.size()>1){
            
            pop_heap(stones.begin(),stones.end());
            
            int x= stones.back();
            stones.pop_back();
         
            
            pop_heap(stones.begin(),stones.end());
            
            int y= stones.back();
            stones.pop_back();
            
            int diff =abs(x-y);
            
            if(diff>0){
                stones.push_back(diff);
                push_heap(stones.begin(),stones.end());
            }
          
            
        }
    
          if(stones.size()==1){
                return stones[0];
            }else{
                return 0;
            }
    }
};
