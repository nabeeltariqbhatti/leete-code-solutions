// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}// } Driver Code Ends


int missingNumber(int A[], int N)
{
    
    int sum = N* (N+1)/2;
    cout<< "N is "<< N<<endl;
   
    cout<< "Sum is or  N*(N+1)/2 =  "<< sum <<endl;
    
    for(int i =0 ; i< N-1; i++){
        sum = sum-A[i];
        cout <<" sum = " << " " <<sum << " A[i] " <<A[i] <<endl; 
        
    }
    cout << " final result   "<< sum <<endl<<endl;
    return sum;
    
    // int B[N]={};
 
    
    // for(int i=1; i<=N; i++){
    //     B[i-1] = i;
    //      //cout<<" Val of B[i] at index  "<< i-1<<" " << B[i-1]<< " val of i "<< " " <<i<<endl;
    // }
  
    // declare c with enough space to hold all the elements in result
    //  int c[2] = {};
    // std::set_difference(B, B+N, A, A+(N-1) , c);
  
    //     return c[0];
    
    
    // std::set_difference(B, B+N,A, A+(N-1),c);
    // return c[0];
                          
    // for(int i=0; i<N; i++){
    //     cout<<B[i];
    // }
    
    
    // not accepted
//     int * p;
// for(int i = 1; i<=N; i++){

//     p = std::find (A, A+N, i);
//   if(p!=A+N){
//     //   cout<< *p <<" "<<endl;
//   }else{
//       return i;
//   }
   
// }
     
    
    // int * p;
    
    // for( int i = 1; i<=N; i++){
        
    //     p = std::find(A, N+1, i);
    //     if(p != sizeof(A)){
    //         //
    //     }else{
    //         return i;
    //     }
    // }
//     map<int,int> _map;
//     vector <int> _vector;
   
//      for(int i=1; i<=N;i++ ){
//       _vector.push_back(i);
//   }
  //solution with map was not accepted as well
//   for(int i =0 ; i< N; i++){
      
 // }
//   for(int v : _vector){
//       cout<<v<<endl;
//   }
//  std::vector<int>::iterator it;
//   for(int i=0; i<N; i++){
//       cout<<A[i]<<endl;
//     it = find (_vector.begin(), _vector.end(), A[i]);
//   if (it != _vector.end())
// //do nothing
//   else
//   {
//     return A[i];
//     break;  
//   }
    
      
      
 // }
    
    
    
    // for(int i = 0; i<N; i++){
        
    //         auto it = _map.find(A[i]);
    //         if(it != _map.end()){
    //              _map[it->first] = 1;
    //         }
           
       
    // }
    // for(auto  it = _map.begin(); it != _map.end(); it++){
    //   if(it->second==0)return it->first;
    // }
    
 
}
