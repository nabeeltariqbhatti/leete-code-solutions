// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{

    public:
    //Function to find the maximum profit and the number of jobs done.
    static int compare(Job a, Job b){
        return a.profit > b.profit;
    }
vector<int> JobScheduling(Job arr[], int n)
{
sort(arr, arr + n, compare);
bool jo[n] = {0};
int ans[n] = {0};
for (int i = 0; i < n; i++) {
    
    cout<< " dead =" << arr[i].dead<< " "<< arr[i].profit<<endl;
for (int j = min(arr[i].dead, n) - 1; j >= 0; j--) {
    cout<< " n " << n << " arr[i].dead" << arr[i].dead<< " " << min(arr[i].dead,n)-1<<endl;
if (jo[j] == false) {
jo[j] = true;
ans[j] = arr[i].profit;
break;
}
}
}
int no = 0;
int resSum = 0;
for (int i = 0; i < n; i++) {
if (ans[i] > 0) {
    cout<< "ans[j] " <<ans[i]<<endl;
no++;
resSum += ans[i];
}
}
vector<int>res(2);
res[0] = no;
res[1] = resSum;
return res;
}
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
