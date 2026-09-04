class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();
        int currMax = INT_MIN;
        
        int smallestIdx = -1;
        int lowestDiff = INT_MAX;


        for(int i = 0 ; i < n ; i++){
            
            currMax = max(currMax, nums[i]);
            int currMin = INT_MAX;
            
            for(int j = i; j < n ; j++){

                currMin=min(currMin, nums[j]);
            }   

            int currDiff = currMax - currMin;

            if( currDiff <= k){

                return i;

            }

        }

        return smallestIdx;
        
    }
};