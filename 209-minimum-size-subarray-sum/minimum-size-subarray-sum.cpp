class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left = 0;
        int minSubtrs = INT_MAX;
        int sum = 0;
        int res = 0;

        for( int right = 0; right < nums.size() ; ++right){

            sum += nums[right];

            while(sum >= target){
                res = right - left + 1;
                minSubtrs = min( minSubtrs , res);
                sum -= nums[left];
                left++;
            }

            
            

        }

        return minSubtrs == INT_MAX ? 0 : minSubtrs;
    }
};