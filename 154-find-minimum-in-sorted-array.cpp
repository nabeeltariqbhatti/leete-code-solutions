class Solution {
    
    int search (vector<int>& nums, int l, int r){
        if( l == r) return nums[l];
        int mid = l + (r - l) / 2;
        if(nums[mid] > nums[r]) search(nums, mid+1, r);
        if(nums[mid] < nums[r]) search(nums, l,mid);
        return (nums, l, r-1);
    }
public:
    int findMin(vector<int>& nums) {
       
        
          int l = 0, r = nums.size()-1;
        while(l < r){
            int mid = l + (r-l)/2;
            if(nums[mid] > nums[r]) l = mid+1;
            else if(nums[mid] < nums[r]) r = mid;
            else r--;
        }
        return nums[l];
    }
    
};
