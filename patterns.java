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


//      0 
//     1 2 
//    3 4 5 
//   6 7 8 9 


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
                      //System.out.print(counter++); uncomment this for pyramid with numbers
                    //  System.out.print("*"); uncomment this for payramid with stars
                 }
                 check = true;
             }
             
         }
         System.out.println();
     }



