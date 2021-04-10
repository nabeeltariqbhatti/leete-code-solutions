class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       int res=0;
        for(auto x:nums) 
        {
            //if res xor next same then revert the value to 0
            //if it appears 1 time then keep it 
           res=res^x;
           cout<<res<< " x"<< x<<endl; 
        }
            
        return res;
    }
};
