class Solution {
public:
    int findComplement(int num) {
        if(num==0)return 1;
        //obtain bits in num
       int shifted= log2(num)+1;
        
        
        
        int mask=(unsigned)(1<<shifted)-1;
        
        
   
        
        return num ^ mask;
        
    }
};
