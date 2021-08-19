#include <iostream>
using namespace std;

int main() {
int t =0; 
	
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	  	int m=0,temp=0;
    while(n!=0){
            temp=n%2;
            if(temp==1)
            m++;
            n=n/2;
            }
	  cout<<m<<endl;
	}

	return 0;
}
