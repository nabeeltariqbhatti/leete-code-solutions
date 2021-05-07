class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        if(k==len(num)):
                return "0";
        i=0
        while(k>0):
            i= (i > 0) and (i-1) or 0;
            while(i<len(num)-1 and num[i]<=num[i+1]):
                i+=1;
              
            num=num[0:i]+num[i+1:]
            k-=1;
                
                
        
        i=0;
        while(i<len(num) and num[i]=='0'):
            i+=1;
        
         
        
        if(i>0):
            num=num[i:];
        
        if(len(num)==0):
            return "0";
        else:
            return num;
        
        
        
        if(len(num)==0):
            return "0";
        else:
            return num;
        
        
