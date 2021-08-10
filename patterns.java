public class MyClass {
    public static void main(String args[]) {
     for(int i =5; i>0; i--){
         
         
         for(int j=i;j>0;j-- ){
             System.out.print(" *");
         }
         System.out.println();
     }
      
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
      
      
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 
     
      for(int i =0; i<5; i++){
          for(int j=i;j>0;j-- ){
             System.out.print("  ");
         }
         for(int j = 0; j < 5 - i ; j++){
             System.out.print("* ");
         }
        
         System.out.println();
     }
    }
}



//      * 
//     * * 
//    * * * 
//   * * * * 



 boolean check=false;
     for(int i=0; i<4; i++){
        for(int k=4; k>i-1; k--){
            System.out.print(" ");
        }
         for(int j=0; j<=i*2+1; j++){
             if(j>0 && check == true){
                 System.out.print(" ");
                 check = false;
             }else{
                 if(check==false){
                     System.out.print("*");
                 }
                 check = true;
             }
             
         }
         System.out.println();
     }



