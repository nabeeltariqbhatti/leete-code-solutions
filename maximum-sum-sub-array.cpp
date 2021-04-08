class Solution {
public:
    int maxSubArray(vector<int>& nums) {
//        if(nums.size()==0)
//            return 0;
    
        
//            int sum_max=nums[0];
//            int sum_including_current=nums[0];
           
//            for(int n: nums){
//                sum_including_current=max(sum_including_current+n,n);
//                sum_max=max(sum_max,sum_including_current);
//            }
//             return sum_max;
        
        
         // Initialise max and maxTillNow as nums[0]
    int max = nums[0];
    int maxTillNow = nums[0];
    
    // Loop through the array
    for (int i = 1; i < nums.size(); i++) {
        // maxTillNow is max of curr element or maxTillNow + curr element
        maxTillNow = std::max(nums[i], maxTillNow + nums[i]);
        // max is maximum of max and maxTillNow
        max = std::max(max, maxTillNow);
    }
    
    // Return the result
    return max;
       }
       
    };
