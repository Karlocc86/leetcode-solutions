class Solution {
public:
    int maxSubArray(vector<int>& nums) {


        int globalSum=nums[0];
        int currentSum=nums[0];

       for( int i = 1 ;  i < nums.size() ; ++i){

            currentSum = max(nums[i], currentSum + nums[i]);
            globalSum= max(currentSum, globalSum);
            

       }
       
       return globalSum;
        
    }
};