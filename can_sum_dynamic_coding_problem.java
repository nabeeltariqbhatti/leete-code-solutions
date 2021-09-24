public class MyClass {
    
    public boolean canSum(Integer target, Integer[] numbers){
        
        if(target == 0) return true;
        
        for(int number:numbers){
            if(number > target) continue;
            
            int result = target - number;
            
           if(canSum(result,numbers) == true) return true;
        }
        return false;
    }
    public static void main(String args[]) {
     
     
     Integer[] a = {10,10,5,6};
     MyClass myClass = new MyClass();
      System.out.println(myClass.canSum(2,a));
    
    }
}
