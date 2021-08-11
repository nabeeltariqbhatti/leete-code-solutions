#include <iostream>

using namespace std;

int main() {
      int t =0;
      
      cin>>t;
      
      while(t--){
          
          
          int size;
          cin>>size;
          int a[size]={};
          for(int i=0; i<size; i++){
              
              cin>>a[i];
          }

          int sum = a[size-1]*a[size-1] -  a[size-2]*a[size-2] ;
         
         
         bool flag = true;
         for(int j = size-3; j>=0; j--){
            if(flag){
                 sum += a[j] * a[j];
                 flag = !flag;
            }else{
                
                sum -= a[j] * a[j];
                flag= !flag;
            }
            
         }
          cout<<sum<<"\n";
         
          
          
      }
	return 0;
}
