// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    
     return badVersion(1,n);
    }
   int badVersion( int s, int e){
       if(s==e){
           return s;
       }
       
       
       int mid=s+(e-s)/2;
       
       if(isBadVersion(mid)){
          return badVersion(s,mid);
       }
       else{
          return badVersion(mid+1,e);
       }
       
   }
  
};
