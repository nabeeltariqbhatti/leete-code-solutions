class Solution(object):
    def checkValidString(self, s):
        
        
        if(len(s)<1):
            return True
        """
        :type s: str
        :rtype: bool
        """
        
        balance=0
        
        for character in s:
            if (character==')'):
                balance-=1
            else:
                balance+=1
            if (balance<0):
                return False
                
        
        if (balance== 0):
            return True
        
        
        balance=0
        
        for character in reversed(s):
            if (character=='('):
                balance-=1
            else:
                balance+=1
                
                
            if balance<0:
                return False;
        

        
        return True
        
        
        
        
