class Solution {
    public int numJewelsInStones(String jewels, String stones) {
          Set<Character> _jewels =new HashSet<>();
        
       for(char c:jewels.toCharArray()){
           _jewels.add(c);
       }
        int count=0;
        
        for(char stone: stones.toCharArray()){
            if(_jewels.contains(stone)){
                ++count;
            }
        }
        return count;
    }
}
