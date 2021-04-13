class Solution {
    public boolean checkValidString(String s) {
        if(s.length()<1){
            return true;
        }
        
        int balance=0;
        
        
    for(int i=0; i<s.length();i++){
        if(s.charAt(i)==')'){
            //if encounters a closing bracket at start no need to traverse further because 
            //corresponding opening is missing
            balance--;
        }else{
            balance++;
        }
        if(balance<0){
            return false;
        }
    }
        //if astrisk and opening brakets are equal to closing in the end of uteration of the string 
        //return true
        
        
        
        if(balance==0){
            return true;
        }
        
        balance=0;
        
        
for(int i=s.length()-1; i>=0;i--){
        if(s.charAt(i)=='('){
            balance--;
        }else{
            balance++;
        }
        if(balance<0){
            return false;
        }
    }  
        
        
//      if(s.length()==1){
//          if(s[0]=='(' || s[0]==')'){
//              return false;
//          }else{
//              return true;
//          }
//      }
//       int countOpening=0;
//       int countClosing=0;
        
//         for (int i=0;i<s.length();i++){
//             if(s[i]=='(' || s[i]=='*' ){
//                 countOpening++;
//             }
//         }
//         cout<<s.length()<<endl;
        
//         for (int i=s.length()-1;i>=0;i--){
//             if(s[i]==')' || '*' ){
//                 countClosing++;
//             }
//             if(countClosing>countOpening){
//                 return false;
//             }
            
//         }
        
//         if(countClosing==countOpening){
//             return true;
//         }
//         if(countOpening==2){
//             return true;
//         }
//         if(countOpening>2 && countClosing==0){
//             return false;
//         }
//         if(countClosing>countOpening){
//                 return false;
//             }else{
//                 if(countOpening>0 && countClosing==0){
//                     return false;
//                 }
//             }
//         if(countOpening == countClosing){
//             return true;
//         }
        
    
        return true;
    }
}
