// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	   // simple solution
	   // string original = S;
	   //reverse(S.begin(), S.end());
	   // if(original == S) return 1;
	   // return 0;
	   
	   bool palindrome = 1;
	   if(S.length()==1) return 1;
	   for(int i = 0; i<S.length()-1; i++){
	       
	       if(S[i] == S[S.length()-1-i]){
	           palindrome = 1;
	       }else{
	           palindrome = 0;
	           break;
	       }
	   }
	   return palindrome;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
