class Solution {
    public int findComplement(int num) {
        
        Integer num_bits=(int) (Math.log(num)/Math.log(2))+1;
        
        Integer mask=(1<<num_bits)-1;
        
        return num ^ mask;
        
    }
}
