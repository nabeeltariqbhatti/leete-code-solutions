// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
      vector< pair<int,int> > _vector_meetings;
      
      for(int i=0; i<n; i++){
          
          _vector_meetings.push_back({start[i],end[i]});
          
          
      }
      sort(_vector_meetings.begin(), _vector_meetings.end());
      
      int end_time = -1;
      int cnt=0;
      
      for(int i=0; i<n; i++){
          if(_vector_meetings[i].first > end_time){
              cnt++;
              end_time = _vector_meetings[i].second;
          }else if(_vector_meetings[i].second < end_time ){
              end_time =_vector_meetings[i].second;
          }
      }
        
          return cnt;
         
          
         
          
          
        }
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
