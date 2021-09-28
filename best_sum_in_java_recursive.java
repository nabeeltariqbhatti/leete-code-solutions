import java.util.*;

public class MyClass {
    
    //memoization will be used to optimize
    public ArrayList<Integer> combination = new ArrayList();
    public ArrayList<Integer> bestSum(Integer target, Integer[] numbers){
        
        if(target == 0) return new ArrayList();
        
        
        
        if (target < 0 ) return null;
          for(int number : numbers){
            
            int result = target - number;
            
            ArrayList<Integer> listOfNumbers = bestSum(result, numbers);
            
            if(listOfNumbers != null){
                
                listOfNumbers.add(number);
                if( combination.isEmpty() == true){
                    combination = listOfNumbers;
                }
                if(   listOfNumbers.size() < combination.size() ){
                    {
                        combination = listOfNumbers;
                    }
                    
                }
               
            }
        }
        return combination;
    }
    public static void main(String args[]) {
        
       Integer[] a = {10,10,5,6};
     Integer[] a1 = {3,4};
     Integer[] a2 = {5,3,4,7};
     Integer[] a3 = {2,4};
     Integer[] a4 = {2,3,5};
     Integer[] a5 = {10,20,30,25};
     MyClass myClass = new MyClass();
      System.out.println(myClass.bestSum(2,a));
      System.out.println(myClass.bestSum(7,a1));
   
        System.out.println(myClass.bestSum(100,a5));
        // myClass.memo.clear();


    //     System.out.println(myClass.canSum(7,a3));
    //     myClass.memo.clear();
    //     System.out.println(myClass.canSum(8,a4));
    //     myClass.memo.clear();

    //     myClass.memo.clear();
     }
}
