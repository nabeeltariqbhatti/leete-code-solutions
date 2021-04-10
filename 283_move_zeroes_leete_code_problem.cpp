class Solution {
public:
    void moveZeroes(vector<int>& nums) {      
        int i=0; 
        while(i<nums.size()){
            int j=i+1;
            while(j<nums.size()){
                if(nums[j]!=0){
                    break;
                }
                j++;
            }
           if(j==nums.size()){
               break;
           }
            // if(nums[j] < 0){
            //     nums[j]=0;
            // }
            // if( nums[i]<0){
            //     nums[i]=0;
            // }
            // iter_swap(nums.begin()+i, nums.begin()+j);
            if(nums[i]==0){
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
            
            i++;
        }
    }
};
