class Solution {
public:
    int sum_of_squares(int num){
        int sum=0;
        while(num){
            int d=num%10;
            sum=sum+d*d;
            num=num/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if(n<=0){
            return false;
        }
        
        unordered_set<int> cache;
        
        while(cache.find(n)==cache.end()){
            cache.insert(n);
            n=sum_of_squares(n);
        }
        if(n==1){
            return true;
        }else{
            return false;
        }
    
        
    }
};
