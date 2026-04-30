#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        

        std::unordered_map<int,int> mp;

        for(int i = 0 ; i < nums.size() ; ++i){

            int complement = target - nums[i];

            if(mp.count(complement) == 1){
                return {i, mp[complement]};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};