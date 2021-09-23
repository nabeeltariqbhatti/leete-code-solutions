import java.util.HashMap;

public class MyClass {
    
    
    HashMap<Long,Long> map = new HashMap<Long,Long>();
    public  Long fib(Long n){
        if(map.containsKey(n)==true)return map.get(n);
        if(n<=2) return 1L;
         map.put(n,fib(n-1) + fib(n-2));
         
         return map.get(n);
    }
    public static void main(String args[]) {
        
        
     MyClass myclass= new MyClass();
     System.out.print(myclass.fib(50L));
    }
}

//this function can calculate fibonacci of larger numbers
