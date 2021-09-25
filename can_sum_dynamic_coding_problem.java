
import java.util.*;
public class MyClass {
    
    
    public Map<Integer,Boolean> memo = new HashMap<>();
    public boolean canSum(Integer target, Integer[] numbers){
        
        if(target == 0) return true;
        if(target < 0) return false;
        if(memo.containsKey(target) == true) return memo.get(target);
       
        for(int number:numbers){
       
            
            int result = target - number;
        
            
           if(canSum(result,numbers) == true) {
               memo.put(target,true);
               
               return true ;
           }
        }
        memo.put(target,false);
        return false;
    }
    public static void main(String args[]) {
     
     
     Integer[] a1 = {3,4};
     Integer[] a2 = {5,3,4,7};
     Integer[] a3 = {2,4};
     Integer[] a4 = {2,3,5};
     Integer[] a5 = {7,14};
     MyClass myClass = new MyClass();
      System.out.println(myClass.canSum(7,a1));
      myClass.memo.clear();
        System.out.println(myClass.canSum(7,a2));
        myClass.memo.clear();
        
        
        System.out.println(myClass.canSum(7,a3));
        myClass.memo.clear();
        System.out.println(myClass.canSum(8,a4));
        myClass.memo.clear();
        System.out.println(myClass.canSum(600,a5));
        myClass.memo.clear();
    
    }
}
