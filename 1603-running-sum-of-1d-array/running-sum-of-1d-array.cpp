class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int prevSum = 0;

        for(int i = 0 ; i < nums.size() ; i++){

            int x = nums[i];

            nums[i] = x + prevSum;

            prevSum+=x;
            
        }
        
        return nums;
    }
};