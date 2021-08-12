// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
       //working solution but not accepted
       
       
    //   map<int,int>_map;
    //   vector<int> remaining_indices;
       
    //   for(int i=0; i<N; i++){
    //       if(_map.find(arr[i]) != _map.end()){
    //           _map[arr[i]]++;
    //       }else
    //       {
    //          _map[arr[i]] = 1;  
    //       }
    //   }
    //   for(int i=1; i<=N; i++){
       
    //   if(_map.find(i) == _map.end()){
          
    //     arr[i-1] =0;
    //   }else{
    //       arr[i-1] = _map[i];
    //   }
 
    //   }
  for(int i = 0; i < N; i++)
        {
            arr[i] -= 1;
        }
        
        sort(arr.begin(), arr.end());
        
        int index = N;
    	for(int i = 0 ; i < N ; i++)
    	{
    	   if(arr[i] >= N)
    	   {
    	       arr[i] = 0;
    	       
    	       if(index == N)
    	       {
    	           index = i;
    	       }
    	   }
    	}
        
        for(int i = 0; i < index; i++)
        {
            arr[arr[i] % N] += N; 
        }
        
        for(int i = 0; i < N; i++)
        {
            arr[i] = arr[i] / N;
        }
        
        //wastage of time 
        
        
    //   int value_keeper=NULL, index_replaced=NULL;
    //  vector<int> _visited;
    // for(int i=0; i<N; i++){
          
    //      if(arr[i] == i+1){
    //          arr[i] = 1;
    //      }else {
    //          if(value_keeper==NULL && index==NULL){
    //              value_keeper = arr[arr[i]-1];
    //              arr[i]=0;
    //              index = arr[i]-1;
    //              arr[arr[i]-1] = 1;
    //          }else{
                 
    //               if(arr[i]-1 == index){
    //               arr[index]++;
    //              }else  if(value_keeper == arr[i]){
    //                      value_keeper = arr[value_keeper-1];
    //                      arr[value_keeper-1] = 1;
    //                      index =  value_keeper-1;
    //                      arr[i]=0;
                       
    //               }else{
                      
                       
    //               }
    //          }
             
           
                 
    //          }
    // }
    }
             
         
    
};


// { Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}




  // } Driver Code Ends
