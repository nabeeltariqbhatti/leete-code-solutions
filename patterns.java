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


// * 
// * * 
// * * * 
// * * * * 
// * * *         
// * *           
// *   



    boolean flip =false;
     for( int i =0; i<7; i++){
        if(flip == false){
              for(int j =0; j<i;j++){
                  System.out.print("* ");
              }
              if(i==4){
                  flip = true;
              }
              System.out.println();
        }
        if(flip == true){
            
            for( int k= 0; k<7-i; k++){
                System.out.print("* ");
            }
            for(int k=i; k>i-i; k--){
                System.out.print("  ");
            }
            System.out.println();
        }
  
         
         
     }




// *
// * *
// *     *
// *         *
// *  *  *  *  *  

 boolean space = false;
        int n =5;
      System.out.print("*");
      System.out.println();
      
      for(int j = 1; j<n-1; j++){
          
          System.out.print("* ");
          
          for(int k = 1; k<=j*2-2; k++){
                System.out.print("  ");
          }
           System.out.print("*");
            System.out.println();
           
      }
      
      for(int i =0; i<n; i++){
          System.out.print("*  ");
      }




