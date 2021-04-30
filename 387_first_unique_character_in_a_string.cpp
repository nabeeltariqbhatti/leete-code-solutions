class Solution {
public:
    int firstUniqChar(string s) {
      int count[26]={0};
        for(char c:s){
            count[c-'a']+=1;
            // cout<<  count[c-'a']<< " "<< c-'a';
        }
        cout<<endl;
        
        for(int i=0;i<s.length();++i){
          //  cout<<count[s[i]-'a']<<" ";
            if(count[s[i]-'a']==1)
                
            {
                return i; 
               
            }  
            
        }
        return -1;
    }
};
