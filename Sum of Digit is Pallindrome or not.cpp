// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        int sum = 0, m;
        while(N>0){
            m = N%10;
            sum += m;
            
            N = N/10;
        }
        
        string str_number = to_string(sum);
        bool palindrome = false;
        
        if (str_number.length() == 1) palindrome=true;
        
        if(str_number.length()%2 == 0){
            for(int i = 0; i<str_number.length()-1; i++){
                if(str_number[i] == str_number[i+1]){
                    palindrome= true;
                }else{
                    palindrome = false;
                }
            }
        }
       
        if(palindrome){
           
            
            return 1;
        }else{
            return 0;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends







// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {

    public:
    int isDigitSumPalindrome(int N) {
        int sum = 0, m;
        while(N>0){
            m = N%10;
            sum += m;
            
            N = N/10;
        }
        
        string str_number = to_string(sum);
       
        
        if (str_number.length() == 1) return 1;
        int reverse = 0;  int num = sum;  
         do{
            int digit = num%10;
            num = num/10;
            reverse = (reverse *10) + digit;
         }while(num != 0);
       
        if(sum == reverse){
           
            
            return 1;
        }else{
            return 0;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends

