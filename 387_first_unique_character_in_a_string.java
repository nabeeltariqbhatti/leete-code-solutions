class Solution {
    public int firstUniqChar(String s) {
        int[] count= new int[26];
        for(char c:s.toCharArray()){
            count[c-'a']+=1;
            // cout<<  count[c-'a']<< " "<< c-'a';
        }
        
        
        for(int i=0;i<s.length();++i){
          //  cout<<count[s[i]-'a']<<" ";
            if(count[s.charAt(i) -'a']==1)
                
            {
                return i; 
               
            }  
            
        }
        return -1;
    }
}
