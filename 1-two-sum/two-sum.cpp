#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        unordered_map<int , int> mp;
        int complement;

        for(int i = 0 ; i < nums.size() ; i++){
            complement = target - nums[i];

            if(mp.count(complement) == 1){
                return {i , mp[complement]};
            }else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};