class Solution {
    public int titleToNumber(String columnTitle) {
         int p = 0;
         int ans =0;
        
        for( int i = columnTitle.length()-1; i>= 0; i-- ){
            
           
            char c = columnTitle.charAt(i);
            
            int value = (int)c - 65 + 1;
            
            ans += value * Math.pow(26,p);
            
            p++;
            
            
        }
        return ans;
    }
}
