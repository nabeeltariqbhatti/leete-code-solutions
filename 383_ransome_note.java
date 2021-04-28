class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
          Map<Character,Integer> _mag=new HashMap<>();
        
        for(char c:magazine.toCharArray()){
            if(_mag.containsKey(c)){
                int count = _mag.get(c);
                count+=1;
                _mag.put(c,count);
                
            }else{
                _mag.put(c,1);
            }
        }
         for (char c: ransomNote.toCharArray())
        {
            if(_mag.containsKey(c)==false){
                return false;
            }
            int count=_mag.get(c);
            if(count==0){
                return false;
            }
            _mag.put(c,count-1);
        }        
        return true;
    }
}
